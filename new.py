# % Parameters
L = 0.04;              % Length of the fin (meters)
P = 0.404;             % Perimeter of the fin (meters)
Ac = 0.0004;           % Cross-sectional area of the fin (square meters)
Tb = 225;              % Base temperature (°C)
T_inf = 25;            % Ambient temperature (°C)
k = 45;                % Thermal conductivity (W/m·K)
h = 15;                % Convective heat transfer coefficient (W/m^2·K)
dx = 0.005;            % Grid spacing (0.5 cm = 0.005 m)

% Calculate the number of grid points
N = L / dx;

% Initialize temperature distribution array
T = zeros(N+1, 1);

% Set boundary conditions
T(1) = Tb;
T(N+1) = Tb;

% Iterate to solve for temperature distribution
for i = 2:N
    T(i) = T(i-1) + (h * P * dx / (k * Ac)) * (T_inf - T(i-1));
end

% Display the temperature distribution
x = 0:dx:L;
fprintf('Distance from base (m)\tTemperature (°C)\n');
for i = 1:N+1
    fprintf('%.4f\t%.3f\n', x(i), T(i));
end
