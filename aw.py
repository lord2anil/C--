from numpy import random, mean
x = random.binomial(n=20, p=0.5, size=50)
mean_head = mean(x)
print(x)
print (mean_head)
[10, 11, 10 ,9, 8 ,10, 9,  9]