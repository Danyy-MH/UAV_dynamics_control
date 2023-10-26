clc
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
% 
qt2 = timeseries2timetable(out.qt);
q1 = qt2.(1);
euler = zeros(length(q1), 3);
euler2 = zeros(length(q1), 3);
% 
for i= 1:length(q1)
    quat = q1(i,:);
    quatc = quatconj(quat);
    euler(i, :) = rad2deg(quat2eul(quat));
    euler2(i, :) = rad2deg(quat2eul(quatc));
end

time = 0.1:1:length(q1);
plot(time, euler(:, 3)')
hold on
plot(time, euler2(:, 3)');
grid on
legend('Quat', 'Quat C')



