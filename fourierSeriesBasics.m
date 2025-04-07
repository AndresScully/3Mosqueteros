clear
clc
% n = input('enter number of data points: ');
% t = (2*pi/n)*(0:n-1);
% x = 1+cos(t)+2*sin(2*t);
% z = fft(x);
% m = round((n-1)/2);
% a = real(2*z(1:m+1)/n);
% b = -imag(2*z(2:m+1)/n);

n = input('enter number of data points: ');
t = (2*pi/n)*(0:n-1);
x = 1+cos(t)+2*sin(t);
noise = (0.1 * (-1+2*rand(1, length(x))));
x = x + noise;
z = fft(x);
m = round((n-1)/2);
a = real(2*z(1:m+1)/n);
b = -imag(2*z(2:m+1)/n);
