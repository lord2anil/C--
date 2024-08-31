

import numpy as np
import matplotlib.pyplot as plt

# GIVENS
Nx = int(input('Mesh Size: '))
L = 1
W = 1
Wall_Velocity = 1
rho = 1
mu = 0.01
dt = 0.001
maxIt = 50000
maxe = 1e-6

# SETUP 1D GRID
Ny = Nx
h = L / (Nx - 1)
x = np.linspace(0, L, Nx)
y = np.linspace(0, W, Ny)
X, Y = np.meshgrid(x, y)

i = np.arange(2, Nx - 2)
j = np.arange(2, Ny - 2)

# ARRAY FORMATION
w_old = np.zeros((Nx, Ny))
St = w_old.copy()
w_new = w_old.copy()
u = w_old.copy()
v = w_old.copy()

# SOLVE LOOP SIMILAR TO GAUSS-SIEDEL METHOD
for iter in range(1, maxIt + 1):
    # CREATE BOUNDARY CONDITIONS
    w_old[0:Nx - 1, Ny - 1] = -2 * St[0:Nx - 1, Ny - 2] / (h**2) - Wall_Velocity * 2 / h  # Top
    w_old[0:Nx - 1, 0] = -2 * St[0:Nx - 1, 1] / (h**2)  # Bottom
    w_old[0, 0:Ny - 1] = -2 * St[1, 0:Ny - 1] / (h**2)  # Left
    w_old[Nx - 1, 0:Ny - 1] = -2 * St[Nx - 2, 0:Ny - 1] / (h**2)  # Right

    # QUICK SCHEME
    F_e = 0.5 * (u[i, j] + u[i + 1, j]) * h
    F_e_1 = F_e * ((3 / 8 * w_old[i + 1, j] + 3 / 4 * w_old[i, j] - 1 / 8 * w_old[i - 1, j] *
                    (np.maximum(F_e, 0)) + ((3 / 4 * w_old[i + 1, j] + 3 / 8 * w_old[i, j] -
                                             1 / 8 * w_old[i + 2, j]) * np.maximum(-F_e, 0))))
    F_w = -0.5 * (u[i, j] + u[i + 1, j]) * h
    F_w_1 = F_w * ((3 / 8 * w_old[i, j] + 3 / 4 * w_old[i - 1, j] - 1 / 8 * w_old[i - 2, j] *
                    (np.maximum(F_w, 0)) + ((3 / 4 * w_old[i, j] + 3 / 8 * w_old[i - 1, j] -
                                             1 / 8 * w_old[i + 1, j]) * np.maximum(-F_w, 0))))
    F_n = 0.5 * (v[i, j] + v[i + 1, j]) * h
    F_n_1 = F_n * ((3 / 8 * w_old[i, j + 1] + 3 / 4 * w_old[i, j] - 1 / 8 * w_old[i, j - 1] *
                    (np.maximum(F_n, 0)) + ((3 / 4 * w_old[i, j + 1] + 3 / 8 * w_old[i, j] -
                                             1 / 8 * w_old[i, j + 2]) * np.maximum(-F_n, 0))))
    F_s = -0.5 * (v[i, j] + v[i + 1, j]) * h
    F_s_1 = F_s * ((3 / 8 * w_old[i, j] + 3 / 4 * w_old[i, j - 1] - 1 / 8 * w_old[i, j - 2] *
                    (np.maximum(F_s, 0)) + ((3 / 4 * w_old[i, j] + 3 / 8 * w_old[i, j - 1] -
                                             1 / 8 * w_old[i, j + 1]) * np.maximum(-F_s, 0))))

    # VORTICITY TRANSPORT EQUATION
    w_new = w_old.copy()
    w_old[i, j] = w_new[i, j] + (-1 * (St[i, j + 1] - St[i, j - 1]) / (2 * h) * F_e_1 + F_w_1 +
                                 (St[i + 1, j] - St[i - 1, j]) / (2 * h) * F_s_1 + F_n_1 +
                                 mu / rho * (w_new[i + 1, j] + w_new[i - 1, j] - 4 * w_new[i, j] +
                                             w_new[i, j + 1] + w_new[i, j - 1]) / (h**2)) * dt

    # EQUATION FOR STREAM FUNCTION
    St[i, j] = (w_old[i, j] * h**2 + St[i + 1, j] + St[i, j + 1] + St[i, j - 1] + St[i - 1, j]) / 4

    # CHECK FOR CONVERGENCE
    if iter > 10:
        error = np.max(np.max(w_old - w_new))
        if error < maxe:
            break

# CREATE VELOCITY FROM STREAM FUNCTION
u[1:Nx - 2, Ny - 1] = Wall_Velocity
u[i, j] = (St[i, j + 1] - St[i, j - 1]) / (2 * h)
v[i, j] = (-St[i + 1, j] + St[i - 1, j]) / (2 * h)

# PLOTS
plt.figure()
plt.contourf(x, y, u.T, 23, cmap='viridis', linewidths=0.5)
plt.title('U-velocity')
plt.xlabel('x-location')
plt.ylabel('y-location')
plt.axis('equal')
plt.colorbar()

plt.figure()
plt.plot(y, u[Ny // 2, :])
plt.title('Horizontal Centerline velocity')
plt.xlabel('y/L')
plt.ylabel('u/U')
plt.axis('square')
plt.xlim([0, L])
plt.grid(True)

plt.figure()
plt.plot(x, v[:, Nx // 2])
plt.title('Vertical Centerline velocity')
plt.xlabel('x/L')
plt.ylabel('v/V')
plt.axis