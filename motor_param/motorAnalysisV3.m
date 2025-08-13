%{
Adan Marquez
Motor Data Analysis
Data retrieved from RcBenchmark test module
%}


clc
close all
format long

%% File manager
clc
green      = '#06ad00';
orange     = '#ff8000';

% filename = "Tmotor_3004.csv"; %nel
% filename = "Tmotor_0205.csv"; %nel
% filename = "TMotor_1045_1411_2";
filename = "Tmotor_07020_4S";

% matrix form
file = readmatrix(filename);
dataLength = length(file(:, 1));
% startIndex = 340;
% endIndex = dataLength - 138;

% select rows for pwm, thurst, torque, rad2/s

% pwm = file(startIndex:endIndex, 2);
time = file(:, 1);

tf = 38.3516 - 2;
t0 = tf - 30;

[~, tf_i] = min(abs(time - tf));
[~, t0_i] = min(abs(time - t0));

startIndex = t0_i;
endIndex = tf_i;
% length(time)
dataNum = endIndex - startIndex + 1;

pwm = linspace(1000, 2000, dataNum)';
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
degree = 2;
coeff = polyfit(omegaSquare, pwm, degree);
fprintf('Polyfit of Angular Vel Square vs PWM: \n')
disp(coeff(1))
disp(coeff(2))
disp(coeff(3))
pwmPolyfit = polyval(coeff, omegaSquare);


%polyfit of pwm and omega2
degree2 = 2;
coeff2 = polyfit( pwm,omegaSquare, degree2);
fprintf('Polyfit of  PWM vs Angular Vel Square')
disp(coeff2)
OmegaPolyfit = polyval(coeff2, pwm);

%% Time plotting

% plot(time, file(:, 10))
% plot(time, file(:, 9))
%% Plotting

fontSize = 14;
caption = sprintf('Thrust Factor kT');

hfig = figure('Name', 'Motor Linear Fitting', 'Color', 'w');
t = tiledlayout(2, 2, 'Padding','compact', 'TileSpacing','compact');
t.Padding = "compact";
t.TileSpacing = 'compact';

nexttile

plot(omegaSquare, thrust, 'LineStyle','-', 'LineWidth',2, 'Color',"red");
hold on
plot(omegaSquare, linearRegThrust, 'LineStyle','-.', 'LineWidth',2, 'Color',"black")
hold off
title(caption, 'FontSize', fontSize)
xlabel('$\Omega^2$ $[$rad$^2/$s$^2] $')
ylabel('Thrust [N]')
lgd = legend('Data', 'Linear Regression', 'Location','best');
lgd.ItemHitFcn = @hitcallback;

nexttile 

caption = sprintf('Torque Factor kQ');

plot(omegaSquare, torque, 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(omegaSquare, linearRegTorque, 'LineStyle','--', 'LineWidth',2, 'Color',"black")
hold off
title(caption, 'FontSize', fontSize)
xlabel('$\Omega^2$ $[$rad$^2/$s$^2] $')
ylabel('Torque [Nm]')
lgd = legend('Data','Linear Reg', 'Location','best');
lgd.ItemHitFcn = @hitcallback;

nexttile

% caption = sprintf('$\Omega^2$ vs PWM');
omega2 = omegaSquare;
% pwm2 = -0.278e-09 .* omega2 .* omega2 + 0.0011936 .* omega2 + 1114.2273;
% pwm2 = -0.441e-09 .* omega2 .* omega2 + 0.0013486 .* omega2 + 1118.858;
pwm3 = -1.126e-09 .* omega2 .* omega2 + 0.002147 .* omega2 + 1061.2811;
pwm4 = -0.000000001230 .* omega2 .^ 2 + 0.0024128 .* omega2 + 1077.8577;
pwm5 = coeff(1) .* omega2 .^ 2 + coeff(2) .* omega2 + coeff(3);

% plot(omegaSquare, pwm2, 'LineStyle','-', 'LineWidth',2, 'Color',"red")
plot(omegaSquare, pwm, 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(omegaSquare, pwm4, 'LineStyle','--', 'LineWidth',2, 'Color', green)
plot(omegaSquare, pwm3, 'LineStyle','--', 'LineWidth',2, 'Color', "black")
plot(omegaSquare, pwm5, 'LineStyle','--', 'LineWidth',2, 'Color', orange)
hold off
title('$\Omega^2$ vs PWM','interpreter','latex')
xlabel('$\omega^2$ $[$rad$^2/$s$^2] $')
ylabel('PWM [us]')
lgd = legend('Data', 'PolyFitPx4', 'PolyFit', 'Actual', 'Location','best');
lgd.ItemHitFcn = @hitcallback;

nexttile

plot(pwm, omegaSquare, 'LineStyle','-', 'LineWidth',2, 'Color',"red")
hold on
plot(pwm, OmegaPolyfit, 'LineStyle','--', 'LineWidth',2, 'Color',"black")
hold off
title('PWM vs $\Omega^2$','interpreter','latex')
xlabel('pwm', 'FontSize', fontSize)
ylabel('$\omega^2$', 'FontSize', fontSize)
lgd = legend('Data', 'Polyfit', 'Location','best');
lgd.ItemHitFcn = @hitcallback;

set(findall(hfig, '-property', 'FontSize'), 'FontSize', 24)
set(findall(hfig, '-property', 'Box'), 'Box', 'off')
set(findall(hfig, '-property', 'Interpreter'), 'Interpreter', 'latex')
set(findall(hfig, '-property', 'TickLabelInterpreter'), 'TickLabelInterpreter', 'latex')
% set(findall(hfig, '-property', 'color'), 'color', 'none')
% copygraphics(hfig, 'BackgroundColor', 'none', 'ContentType', 'vector');
picturewidth = 60;
hw_ratio = 0.5;
set(hfig,'Units','centimeters','Position',[3 3 picturewidth hw_ratio*picturewidth])

% set(hfig, 'Color', 'none');
% 
% exportgraphics(hfig, fullfile("expData/expPlots/motorm.jpg"), ...
%     'ContentType','vector', ...
%     'Resolution',600);

%% Allocation Matrix Calculation

% alpha = [pi/6; -pi/6; -pi/2; -5*pi/6; 5*pi/6; pi/2];
% l = 0.27;
% varphi = pi/9;
% 
% m11 = -kT*cos(alpha(1))*sin(varphi);
% m21 = kT*sin(alpha(1))*sin(varphi);
% m31 = kT*cos(varphi);
% m41 = cos(alpha(1))*(l*kT*cos(varphi) - kQ*sin(varphi));
% m51 = sin(alpha(1))*(-l*kT*cos(varphi) + kQ*sin(varphi));
% m61 = l*kT*sin(varphi) + kQ*cos(varphi);
% 
% m12 = kT*cos(alpha(2))*sin(varphi);
% m22 = -kT*sin(alpha(2))*sin(varphi);
% m32 = m31;
% m42 = cos(alpha(2))*(l*kT*cos(varphi) - kQ*sin(varphi));
% m52 = sin(alpha(2))*(-l*kT*cos(varphi) + kQ*sin(varphi));
% m62 = -l*kT*sin(varphi) - kQ*cos(varphi);
% 
% m13 = kT*cos(alpha(3))*sin(varphi);
% m23 = kT*sin(alpha(3))*sin(varphi);
% m33 = m31;
% m43 = cos(alpha(3))*(l*kT*cos(varphi) + kQ*sin(varphi));
% m53 = sin(alpha(3))*(-l*kT*cos(varphi) + kQ*sin(varphi));
% m63 = l*kT*sin(varphi) + kQ*cos(varphi);
% 
% m14 = kT*cos(alpha(4))*sin(varphi);
% m24 = -kT*sin(alpha(4))*sin(varphi);
% m34 = m31;
% m44 = cos(alpha(4))*(l*kT*cos(varphi) - kQ*sin(varphi));
% m54 = sin(alpha(4))*(-l*kT*cos(varphi) + kQ*sin(varphi));
% m64 = -l*kT*sin(varphi) - kQ*cos(varphi);
% 
% m15 = -kT*cos(alpha(5))*sin(varphi);
% m25 = kT*sin(alpha(5))*sin(varphi);
% m35 = m31;
% m45 = cos(alpha(5))*(l*kT*cos(varphi) - kQ*sin(varphi));
% m55 = sin(alpha(5))*(-l*kT*cos(varphi) + kQ*sin(varphi));
% m65 = l*kT*sin(varphi) + kQ*cos(varphi);
% 
% m16 = kT*cos(alpha(6))*sin(varphi);
% m26 = -kT*sin(alpha(6))*sin(varphi);
% m36 = m31;
% m46 = cos(alpha(6))*(l*kT*cos(varphi) + kQ*sin(varphi));
% m56 = sin(alpha(6))*(-l*kT*cos(varphi) + kQ*sin(varphi));
% m66 = -l*kT*sin(varphi) - kQ*cos(varphi);
% 
% allo = [m11, m12, m13, m14, m15, m16;
%         m21, m22, m23, m24, m25, m26;
%         m31, m32, m33, m34, m35, m36;
%         m41, m42, m43, m44, m45, m46;
%         m51, m52, m53, m54, m55, m56;
%         m61, m62, m63, m64, m65, m66];

% allo_i = pinv(allo);
% fprintf('Allocation matrix:')
% disp(allo)
% fprintf('Inverse Allocation matrix:')
% disp(allo_i)

%% Toggle Function

function hitcallback(src,evnt)
    if strcmp(evnt.Peer.Visible,'on')
        evnt.Peer.Visible = 'off';
    else 
        evnt.Peer.Visible = 'on';
    end
end