% clc
% clear
% close all

%{
Adán Márquez
Quaternion math dump
%}

%%

% nz = [0; 0; 1];
% u = [0; 2; 20];
% 
% % normalize vector
% 
% nz = nz / norm(nz);
% nu = u / norm(u)
% 
% if cross(nu, nz) == zeros(3, 1)
%     qt = [1; 0; 0; 0]
%     eu = quat2eul(qt')
% else
%     qt = [-sqrt((1 + dot(nu, nz))/(2)); ((cross(nu, nz))/(norm(cross(nu, nz)))) * sqrt((1 - dot(nu, nz))/(2))];
%     qt = qt / norm(qt)
%     qtc = quatconj(qt')
%     eu = quat2eul(qt')
%     eu = rad2deg(eu)
%     % eu2 = rad2deg(quat2eul(-qt'))
%     euc = rad2deg(quat2eul(qtc))
% end

% att1 = [0; 0; 0]';
% q1 = eul2quat(att1)'
% q1c = quatconj(q1')'
% 
% att2 = [-0.1; 0; 0]';
% q2 = eul2quat(att2)'
% q2c = quatconj(q2')'
% att2_q2c = quat2eul(q2c')

qt2 = out.qt