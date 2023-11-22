%{
Adán Márquez 
A00827172
adanmarquez200@outlook.com

Motor analysys using a Dynamometer
%}

clc
clear
close all
format long

%% EMAX with 8 inch propeller


% clc
% clear
% filename = "EMAX_8_DJI.csv";
% file = readmatrix(filename);
% 
% pwm = file(1:23, 2);
% torque = file(1:23,9);
% thrust = file(1:23,10);
% 
% thrust = thrust .* -1;
% angular_vel = file(1:23,14);
% angular_vel_2 = angular_vel.^2;
% 
% figure('Name','EMAX_8_DJI')
% subplot(3,1,1)
% plot(angular_vel_2, torque);
% 
% title('Torque Factor kQ')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Torque [N m]')
% 
% subplot(3,1,2)
% plot(angular_vel_2, thrust);
% 
% title('Thrust Factor kT')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Thrust [N]')
% 
% subplot(3,1,3)
% plot(pwm, thrust);
% 
% title('Thrust Factor kT')
% xlabel('PWM','Interpreter','latex')
% ylabel('Thrust [N]')

%% EMAX with 10 inch propeller

% filename = "C:\Users\Adan Daniel\Documents\IMT\7Semestre_tec\Estancia_investigacion\motor_data\EMAX_1045.csv";
% file = readmatrix(filename);
% 
% torque2 = file(1:23,9:9);
% thrust2 = file(1:23,10:10);
% thrust2 = thrust2.*-1;
% angular_vel2 = file(1:23,14:14);
% angular_vel_22 = angular_vel2.^2;
% 
% figure('Name','EMAX_1045')
% subplot(2,1,1)
% plot(angular_vel_22, torque2);
% 
% title('Torque Factor kQ')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Torque [N m]')
% 
% subplot(2,1,2)
% plot(angular_vel_22, thrust2);
% 
% title('Thrust Factor kT')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Thrust [N]')

%% TMotor with 10 inch propeller

% filename = "C:\Users\Adan Daniel\Documents\IMT\7Semestre_tec\Estancia_investigacion\motor_data\TMotor_1045.csv";
% file = readmatrix(filename);
% 
% torque2 = file(1:23,9:9);
% thrust2 = file(1:23,10:10);
% thrust2 = thrust2.*-1;
% angular_vel2 = file(1:23,14:14);
% angular_vel_22 = angular_vel2.^2;
% 
% figure('Name','TMotor_1045')
% subplot(2,1,1)
% plot(angular_vel_22, torque2);
% 
% title('Torque Factor kQ')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Torque [N m]')
% 
% subplot(2,1,2)
% plot(angular_vel_22, thrust2);
% 
% title('Thrust Factor kT')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Thrust [N]')


%% TMotor with 8 inch propeller

% filename = "C:\Users\Adan Daniel\Documents\IMT\7Semestre_tec\Estancia_investigacion\motor_data\TMotor_8_DJI.csv";
% file = readmatrix(filename);
% 
% torque2 = file(1:23,9:9);
% thrust2 = file(1:23,10:10);
% thrust2 = thrust2.*-1;
% angular_vel2 = file(1:23,14:14);
% angular_vel_22 = angular_vel2.^2;
% 
% figure('Name','TMotor_8_DJI')
% subplot(2,1,1)
% plot(angular_vel_22, torque2);
% 
% title('Torque Factor kQ')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Torque [N m]')
% 
% subplot(2,1,2)
% plot(angular_vel_22, thrust2);
% 
% title('Thrust Factor kT')
% xlabel('$\omega^2(rad^2/s^2)$','Interpreter','latex')
% ylabel('Thrust [N]')


%% VantTec motor

% filename = "TMotor_1045.csv";
% filename = "EMAX_1045.csv";
filename = "VANTEC.csv";
% filename = "AX_750.csv";
fprintf('Please Select the file to be analyzed: \n')
fprintf('[1] AX_750.csv \n[2] EMAX_8_DJI.csv \n[3] EMAX_1045.csv\n')
fprintf('[4] multistart.csv \n[5] TMotor_8_DJI.csv \n[6] TMotor_1045.csv\n\n')
file = readmatrix(filename);

num_data = 22;

pwm = file(1:num_data , 2);

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

degree = 2; % Choose the degree of the polynomial (e.g., 2 for quadratic)
coefficients = polyfit(angular_vel_22, pwm, degree); % Fit a polynomial to the data
pwm_fit = polyval(coefficients, angular_vel_22);
fprintf("Polyfit of angular velocity square vs pwm")
disp(coefficients)

%ploting

fontSize = 14;
caption = sprintf('Torque Factor kQ');

figure('Name','Tmotor_8')
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
plot(angular_vel_22, pwm_fit)
title(caption3, 'FontSize', fontSize)
ylabel('$$PWM$','Interpreter','latex', 'FontSize', fontSize)
xlabel('$\omega^2$', 'Interpreter','latex', 'FontSize', fontSize)
legend('Data', 'Polyfit', 'Location','best')