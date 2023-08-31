clc 
clear
close all

syms p q r Jxx Jyy Jzz m u v w g
syms fx fy fz tx ty tz
syms roll pitch

omega = [p; q; r]

J = [Jxx, 0, 0;
     0, Jyy, 0;
     0, 0, Jzz]

J_inv = inv(J)

f_x = -J_inv * (cross(omega, J*omega))

M_small = [m, 0, 0;
           0, m, 0;
           0, 0, m];

M = [M_small, zeros(3);
     zeros(3), J]

M_inv = inv(M);

Phi = [0, -r, q, 0, -w, v;
        r, 0, -p , w, 0, -u;
        -q, p, 0,  -v, u, 0;
        0, 0, 0, 0, -r, q; 
        0, 0, 0, r, 0, -p;
        0, 0, 0, -q, p, 0];

Phi = Phi.';

vel = [u; v; w; p; q; r]

F = [fx; fy; fz; tx; ty; tz]

Fg = [m*g*sin(pitch);
      -m*g*cos(pitch)*sin(roll);
      -m*g*cos(pitch)*cos(roll);
      0;
      0;
      0];

vel_dot = M_inv * ((F + Fg) + Phi * M * vel)