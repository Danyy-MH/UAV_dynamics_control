clc
clear
close all

%% problem 3.1

% data = load('examScores.dat');
% disp(data)
% 
% meanScore = mean(data);
% medianScore= median(data);
% maxScore = max(data);
% stanDevScores = std(data);
% 
% fprintf('Arithmetic Mean: %.2f\n', meanScore);
% fprintf('Median: %.2f\n', medianScore);
% fprintf('Maximum Score: %.2f\n', maxScore);
% fprintf('Standard Deviation: %.2f\n', stanDevScores);

%% problem 3.2

Result = oddDoubleFactorial(9);

%% problem 3.3

% tray1 = [theta1; v0_1; y0_1]
% tray = [30, 25, 3.5;
%         45, 25, 3.5;
%         60, 25, 3.5];
% 
% g = 9.81;
% 
% for i = 1:1:3
%     vec = tray(i, :);
%     theta = vec(1);
%     theta = deg2rad(theta);
%     v0 = vec(2);
%     y0 = vec(3);
% 
%     d = (v0 * cos(theta) / g) * (v0 * sin(theta) + sqrt(2 * g * y0 + (v0 * sin(theta))^2));
%     x = 0:d/199:d;
%     x = x';
% 
%     y = x * tan(theta) - (x.^2 * g) / ((v0 * cos(theta))^2 * 2) + y0;
%     if i == 1
%         y1 = y;
%         x1 = x;
%     elseif i == 2
%         y2 = y;
%         x2 = x;
%     else
%         y3 = y;
%         x3 = x;
%     end
% end
% 
% figure()
% plot(x1, y1)
% hold on
% plot(x2, y2)
% plot(x3, y3)
% hold off 
% grid on
% title('Projectile Trajecyories')
% xlabel('horizontal distance (m)')
% ylabel('height (m)')
% legend('trajectory 1','trajectory 2', 'trajectory 3')

%% problem 3.4

% arrhenius equation

% R = 8.31447;
% Ea = 1.11e5;
% A = 2.126e9;
% 
% tempKelvin = 250:2:400;
% tempKelvin = tempKelvin';
% 
% reactionRate = A * exp(1) .^ ((-Ea)./(R * tempKelvin));
% 
% semilogy(tempKelvin, reactionRate)
% title('Arrhenius equation')
% xlabel('Temperature (K)')
% ylabel('reaction rate')
% grid on
% legend('Temperature vs Reaction Time')

%% problem 3.5

% metal deformations

L = 2.5;
A = 50;
F = 5;

E = [200, 68.9, 180, 110];
% metalNames = 'A-36 Steel \n 6061-T6 Aluminum\nAISI 302 Stainless Steel\nTitanium Alloy'
metalNames = {'A-36 Steel', '6061-T6 Aluminum', 'AISI 302 Stainless Steel', 'Titanium Alloy'};
metalNames = string(metalNames);
elongation = F * L ./ (A * E);

bar(elongation);
ax = gca;
ax.XTickLabel = metalNames;
ax.XTickAngleRotation = 30;

grid on
ylabel('Elongation')
title('Elongation of different materials')


%% functions

function Result = oddDoubleFactorial(n) 
    if n == 1
        Result = n;
    else
        Result = n * oddDoubleFactorial(n - 2);
    end
end