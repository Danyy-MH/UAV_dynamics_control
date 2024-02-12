clc
clear
close all

%{
6D formulas into 6 linear formulas
Adan Marquez
7 feb 2024
%}

%%

syms m Ix Iy Iz
syms u v w p q r

M = [m, 0, 0, 0, 0, 0;
    0, m, 0, 0, 0, 0;
    0, 0, m, 0, 0, 0;
    0, 0, 0, Ix, 0, 0;
    0, 0, 0, 0, Iy, 0;
    0, 0, 0, 0, 0, Iz];

Minv = inv(M);

vel = [u; v; w; p; q; r];

Phi = [0, -r, q, 0, -w, v;
        r, 0, -p , w, 0, -u;
        -q, p, 0,  -v, u, 0;
        0, 0, 0, 0, -r, q; 
        0, 0, 0, r, 0, -p;
        0, 0, 0, -q, p, 0];

fxt = M \ transpose(Phi) * M * vel