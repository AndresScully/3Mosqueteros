clear; clc;
%read the wav file and play the file
[y, Fs]=audioread('Fuentes.wav');
y=y(:,2);
sound(y, Fs);

%Plot the amplitude
n=length(y);
plot((1:n)/Fs,y)
xlabel('Time (s)');
ylabel('Amplitude');

%Evaluate frequency component
z=fft(y);
m=round((n-1)/2)-1;
z_half=z(1:m+1);

%Plot frequency component
figure;
plot(Fs*(0:m)/n, abs(z_half))
xlabel('Frequency');
ylabel('Amplitude');

%Wait for user input
pause

% %Cut off the frequency above 1000 Hz
f_cutoff = 1000; %Hz
% z_half(round(n*f_cutoff/Fs):end) = 0; 

%Cut off the frequency below 1000 Hz
z_half(1:round(n*f_cutoff/Fs)) = 0; 


%Plot frequency component
figure;
plot(Fs*(0:m)/n, abs(z_half));
xlabel('Frequency (Hz)');
ylabel('Amplitude');


%Reconstruct the sound from the frequency component and play the sound
z2 = [z_half; conj(z_half(end:-1:2))]; 
y2 = ifft(z2); 
sound(y2, Fs); 