clc
clear
close all

%{
Adan Marquez 
17 oct 2023
Attitude representations and visualization
%}

%% Attitude representations

figure
gm = fegeometry("DRONE_MODEL.stl");
pdegplot(gm)