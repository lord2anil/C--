import numpy as np

# Initialize grid size
n = 10  # grid size
NX = n
NY = n
k = 16.2
rho = 7750
cp = 500
alpha = k / (rho * cp)  # alpha
itr = 1
t = 0
Tn = (150 + 273) * np.ones((NX + 2, NY + 2))  # Initial condition temperature at time step n
Tn1 = np.zeros((NX + 2, NY + 2))  # Temperature at time step n+1
dx = 1 / NX
dy = 1 / NY
dt = 0.8
Rrms = np.inf

# Set boundary conditions
for i in range(0, NX + 2):
    Tn[i, 0] = 2 * (100 + 273) - Tn[i, 1]  # Left boundary
    Tn[i, NY + 2] = 2 * (100 + 273) - Tn[i, NY + 1]  # Right boundary

for j in range(0, NY + 2):
    Tn[0, j] = 2 * (200 + 273) - Tn[1, j]  # Top boundary
    Tn[NX + 2, j] = 2 * (100 + 273) - Tn[NX + 1, j]  # Bottom boundary

Tn1 = Tn

while Rrms > 1e-6:
    Rrms = 0
    for i in range(1, NX + 1):
        for j in range(1, NY + 1):
            Tn1[i, j] = Tn[i, j] + ((Tn[i + 1, j] - 2 * Tn[i, j] + Tn[i - 1, j]) / (dy ** 2) +
                                   (Tn[i, j + 1] - 2 * Tn[i, j] + Tn[i, j - 1]) / (dx ** 2)) * (alpha * dt)

            Rrms = Rrms + (Tn1[i, j] - Tn[i, j]) ** 2

    # Set boundary cells
    for i in range(0, NX + 2):
        Tn1[i, 0] = 2 * (100 + 273) - Tn1[i, 1]
        Tn1[i, NY + 2] = 2 * (100 + 273) - Tn1[i, NY + 1]

    for j in range(0, NY + 2):
        Tn1[0, j] = 2 * (200 + 273) - Tn1[1, j]
        Tn1[NX + 2, j] = 2 * (100 + 273) - Tn1[NX + 1, j]

    Rrms = np.sqrt(Rrms / (NX * NY))
    Tn = Tn1
    itr += 1

# Print the number of iterations
print("Number of iterations:", itr)

# Comparison with analytical solution
alpha1 = 0
T1 = 373
T2 = 573
for n in range(1, 11):
    alpha1 += (((-1) ** (n + 1) + 1) * np.sin(n * np.pi / 2) * np.sinh(n * np.pi / 2) / (n * np.sinh(n * np.pi)))

T = T1 + 2 * (T2 - T1) * alpha1 / np.pi
print("Analytical solution of temperature at center of grid:", T)

# Heat flux calculation
sum1 = 0
sum2 = 0
for i in range(1, NX + 2):
    for j in range(1, NY + 2):
        sum2 -= (k * ((Tn1[NX + 2, j] - Tn1[NX + 1, j] + Tn1[2, j] - Tn1[1, j]) / dy))  # Top and bottom boundaries

for i in range(1, NX + 2):
    sum1 -= (k * ((Tn1[i, 2] - Tn1[i, 1] + Tn1[i, NY + 2] - Tn1[i, NY + 1]) / dx))  # Right and left boundaries

print("Heat flux at boundaries (sum1):", sum1)
print("Heat flux at top and bottom boundaries (sum2):", sum2)
