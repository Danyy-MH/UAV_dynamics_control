clc
clear
close all
format default

%{
Adan Marquez
28-11-2023

Allocation matrix calculation
%}
l = 0.27; % length m
% kT = 0.000006975938113;
% kQ = 0.000118290418538;

% t motor → 10 inch propeller data
%Torque constant
kQ = 2.120621719770643e-07;

%Thrust constant
kT = 1.311483486380778e-05;

alpha = [pi/6; -pi/6; -pi/2; -5*pi/6; 5*pi/6; pi/2];

varphi = pi/9;

%% tilted rotors matrix allocation

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
        m21, m22, -m23, m24, m25, m26;
        m31, m32, m33, m34, m35, m36;
        m41, m42, m43, m44, m45, m46;
        m51, m52, m53, m54, m55, m56;
        m61, m62, m63, m64, m65, m66];

allo_i = pinv(allo);
fprintf('Inverse Allocation matrix:')
disp(allo_i)
fprintf('Allocation matrix:')
disp(allo)


tmotor10 = [-0.6436    0.3716    0.1352    0.8869   -0.5120    1.1817;
            0.6436    0.3716    0.1352    0.8869    0.5120   -1.1817;
            -0.0000   -0.7431    0.1352    0.0000    1.0241    1.1817;
            -0.6436    0.3716    0.1352   -0.8869    0.5120   -1.1817;
            0.6436    0.3716    0.1352   -0.8869   -0.5120    1.1817;
            0.0000   -0.7431    0.1352   -0.0000   -1.0241   -1.1817;] * 1.0e+05;

% disp(tmotor10)