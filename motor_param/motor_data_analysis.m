%{
Adán Márquez 
A00827172
adanmarquez200@outlook.com

Motor analysys using a Dynamometer
%}

clc
close all
format long

%% Motor Analysis

% filename = "TMotor_1045.csv";
filename = "Tmotor_1045_3004.csv";
% filename = "EMAX_1045.csv";
% filename = "VANTEC.csv";
% filename = "multistar.csv";
% filename = "motor1_dan.csv";

% filename = "AX_750.csv";
% fprintf('Please Select the file to be analyzed: \n')
% fprintf('[1] AX_750.csv \n[2] EMAX_8_DJI.csv \n[3] EMAX_1045.csv\n')
% fprintf('[4] multistart.csv \n[5] TMotor_8_DJI.csv \n[6] TMotor_1045.csv\n\n')
file = readmatrix(filename);

num_data = 26;

pwm = file(1:num_data , 2);

pwm_short = pwm(pwm >= 1100 & pwm <= 1990);
% pwm_short = pwm(pwm >= 1100 & pwm <= 1900);
startIndex = find(pwm == pwm_short(1));
endIndex = find(pwm == pwm_short(end));



torque2 = file(1:num_data ,9:9);
thrust2 = file(1:num_data ,10:10);
thrust2 = thrust2.*-1;

angular_vel2 = file(1:num_data ,14:14);
angular_vel_22 = angular_vel2.^2;
angular_vel2_lg = [ones(length(angular_vel_22), 1) angular_vel_22];

pwm_lg = [ones(length(pwm), 1), pwm];

%linear reg

b5 = angular_vel2_lg\torque2;
disp("Torque constant")
disp(b5(2));
btorque2 = angular_vel2_lg*b5;

m2 = angular_vel2_lg\thrust2;
disp("Thrust constant")
disp(m2(2));
bthrust2 = angular_vel2_lg*m2;

pwm_slope = pwm_lg\thrust2;
% fprintf('Values for pwm linear regression: \n')
% disp(pwm_slope)
pwm_linear_regression = pwm_lg * pwm_slope;

%poly fit for omega square vs pwm

degree = 3; % Choose the degree of the polynomial (e.g., 2 for quadratic)
omega_square_short = angular_vel_22(startIndex:endIndex);
coefficients = polyfit(omega_square_short, pwm_short, degree); % Fit a polynomial to the data
pwm_fit = polyval(coefficients, omega_square_short);
fprintf("Polyfit of angular velocity square vs pwm")
disp(coefficients)

%ploting

fontSize = 14;
caption = sprintf('Torque Factor kQ');

figure('Name','Motor Analysis')
subplot(2,2,1)

plot(angular_vel_22, torque2);
title(caption, 'FontSize', fontSize)
xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex', 'FontSize', fontSize)
ylabel('Torque [N m]', 'FontSize', fontSize)
hold on
plot(angular_vel_22, btorque2, '--')
hold off
legend('Data', 'Slope', 'Location','best')

subplot(2,2,2)

caption2 = 'Thrust Factor kT';

plot(angular_vel_22, thrust2);
title(caption2, 'FontSize', fontSize)
xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex', 'FontSize', fontSize)
ylabel('Thrust [N]', 'FontSize', fontSize)
hold on
plot(angular_vel_22, bthrust2, '--')
hold off
legend('Data', 'Slope', 'Location','best')

subplot(2,2,3)

caption3 = 'PWM vs Thrust';
plot(pwm, thrust2)
hold on
plot(pwm, pwm_linear_regression)
title(caption3, 'FontSize', fontSize)
xlabel('$PWM$','Interpreter','latex', 'FontSize', fontSize)
ylabel('Thrust [N]', 'FontSize', fontSize)
legend('Data', 'Linear reg', 'Location','best')

subplot(2,2,4)

caption3 = 'Omega^2 vs PWM';
plot(angular_vel_22, pwm)
hold on
plot(omega_square_short, pwm_fit)
title(caption3, 'FontSize', fontSize)
ylabel('$$PWM$','Interpreter','latex', 'FontSize', fontSize)
xlabel('$\omega^2$', 'Interpreter','latex', 'FontSize', fontSize)
legend('Data', 'Polyfit', 'Location','best')