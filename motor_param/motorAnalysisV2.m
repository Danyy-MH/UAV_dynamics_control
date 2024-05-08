%{
Adan Marquez
Motor Data Analysis
Data retrieved from RcBenchmark test module
%}


close
close all
format long

%% File manager

filename = "Tmotor_3004.csv";
% filename = "Tmotor_0205";
% filename = "TMotor_1045.csv";

% matrix form
file = readmatrix(filename);
dataLength = length(file(:, 1));
startIndex = 1 + 11;
endIndex = dataLength - 1;
dataNum = endIndex - startIndex + 1;

% select rows for pwm, thurst, torque, rad2/s

pwm = file(startIndex:endIndex, 2);
torque = file(startIndex:endIndex, 9);
thrust = file(startIndex:endIndex, 10);
% positive thrust and torque
torque = - torque;
thrust = - thrust;
omega = file(startIndex:endIndex, 14);
omegaSquare = omega .* omega;

%% Linear regresion and curve fitting
% Placeholders for linear regresion
linearRegPWM = [ones((dataNum), 1) pwm];
linearRegOmegaSquare = [ones(dataNum, 1) omegaSquare];

% thrust and torque linear regresion
thrustSlope = linearRegOmegaSquare\thrust;
disp('Thrust constant kT')
disp(thrustSlope(2))
kT = thrustSlope(2);
linearRegThrust = linearRegOmegaSquare * thrustSlope;

torqueSlope = linearRegOmegaSquare\torque;
disp('Torque constant kQ')
disp(torqueSlope(2))
kQ = abs(torqueSlope(2));
linearRegTorque = linearRegOmegaSquare * torqueSlope;

%polyfit of omega2 and pwm
degree = 3;
coeff = polyfit(omegaSquare, pwm, degree);
fprintf('Polyfit of Angular Vel Square vs PWM')
disp(coeff)
pwmPolyfit = polyval(coeff, omegaSquare);

%% Plotting

fontSize = 14;
caption = sprintf('Thrust Factor kT');

figure('Name', 'Motor Linear Fitting');
subplot(2, 2, 1)

plot(omegaSquare, thrust);
hold on
plot(omegaSquare, linearRegThrust, '--', Color='red')
hold off
title(caption, 'FontSize', fontSize)
xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex', 'FontSize', fontSize)
ylabel('Thrust [N]', 'FontSize', fontSize)
legend('Data', 'Linear Regression', 'Location','best')

subplot(2, 2, 2)
caption = sprintf('Torque Factor kQ');

plot(omegaSquare, torque)
hold on
plot(omegaSquare, linearRegTorque, '--', Color='red')
hold off
title(caption, 'FontSize', fontSize)
xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex', 'FontSize', fontSize)
ylabel('Torque [Nm]', 'FontSize', fontSize)
legend('Data','Linear Reg', 'Location','best')

subplot(2, 2, 4)
caption = sprintf('Angular Velocity Sqaare vs PWM Signal');

plot(omegaSquare, pwm)
hold on
plot(omegaSquare, pwmPolyfit, '--')
hold off
title(caption, 'FontSize', fontSize)
ylabel('pwm', 'FontSize', fontSize)
xlabel('$\omega^2$', 'FontSize', fontSize, Interpreter='latex')
legend('Data', 'Polyfit', 'Location','best')

%% Allocation Matrix Calculation

alpha = [pi/6; -pi/6; -pi/2; -5*pi/6; 5*pi/6; pi/2];
l = 0.27;
varphi = pi/9;

m11 = -kT*cos(alpha(1))*sin(varphi);
m21 = kT*sin(alpha(1))*sin(varphi);
m31 = kT*cos(varphi);
m41 = cos(alpha(1))*(l*kT*cos(varphi) - kQ*sin(varphi));
m51 = sin(alpha(1))*(-l*kT*cos(varphi) + kQ*sin(varphi));
m61 = l*kT*sin(varphi) + kQ*cos(varphi);

m12 = kT*cos(alpha(2))*sin(varphi);
m22 = -kT*sin(alpha(2))*sin(varphi);
m32 = m31;
m42 = cos(alpha(2))*(l*kT*cos(varphi) - kQ*sin(varphi));
m52 = sin(alpha(2))*(-l*kT*cos(varphi) + kQ*sin(varphi));
m62 = -l*kT*sin(varphi) - kQ*cos(varphi);

m13 = kT*cos(alpha(3))*sin(varphi);
m23 = kT*sin(alpha(3))*sin(varphi);
m33 = m31;
m43 = cos(alpha(3))*(l*kT*cos(varphi) + kQ*sin(varphi));
m53 = sin(alpha(3))*(-l*kT*cos(varphi) + kQ*sin(varphi));
m63 = l*kT*sin(varphi) + kQ*cos(varphi);

m14 = kT*cos(alpha(4))*sin(varphi);
m24 = -kT*sin(alpha(4))*sin(varphi);
m34 = m31;
m44 = cos(alpha(4))*(l*kT*cos(varphi) - kQ*sin(varphi));
m54 = sin(alpha(4))*(-l*kT*cos(varphi) + kQ*sin(varphi));
m64 = -l*kT*sin(varphi) - kQ*cos(varphi);

m15 = -kT*cos(alpha(5))*sin(varphi);
m25 = kT*sin(alpha(5))*sin(varphi);
m35 = m31;
m45 = cos(alpha(5))*(l*kT*cos(varphi) - kQ*sin(varphi));
m55 = sin(alpha(5))*(-l*kT*cos(varphi) + kQ*sin(varphi));
m65 = l*kT*sin(varphi) + kQ*cos(varphi);

m16 = kT*cos(alpha(6))*sin(varphi);
m26 = -kT*sin(alpha(6))*sin(varphi);
m36 = m31;
m46 = cos(alpha(6))*(l*kT*cos(varphi) + kQ*sin(varphi));
m56 = sin(alpha(6))*(-l*kT*cos(varphi) + kQ*sin(varphi));
m66 = -l*kT*sin(varphi) - kQ*cos(varphi);

allo = [m11, m12, m13, m14, m15, m16;
        m21, m22, m23, m24, m25, m26;
        m31, m32, m33, m34, m35, m36;
        m41, m42, m43, m44, m45, m46;
        m51, m52, m53, m54, m55, m56;
        m61, m62, m63, m64, m65, m66];

allo_i = pinv(allo);
fprintf('Allocation matrix:')
disp(allo)
fprintf('Inverse Allocation matrix:')
disp(allo_i)