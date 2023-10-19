clc
clear
close all

%{
Team 4
Linear programming exercise
%}

%% Exercise

% 130 pounds chocolate cherries
% 170 pounds chocolate mints

% f(x,y) = 2x + 1.25y 
% inequality
% 0.5x + 0.5y <= 130
% 0.5x + 0.66y <= 170

% x, y >= 0

f = [2, 1.25];
A = [0.5, 1/3;
     0.5, 2/3];
b = [130, 170]';
Aeq = []
lb = [0; 0];
x = linprog(f, A, b, [], [], lb)
