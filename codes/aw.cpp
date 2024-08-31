from numpy import random, mean
x = random.binomial(n=20, p=0.5, size=50)
mean_head = mean(x)
print(x)
print (mean_head)
[10 11 10 9 8 10 9 9 7 12 12 8 10 12 9 11 12 8 11 14 10 11 8 9 
8 11 14 10 11 9 6 10 11 9 11 10 13 15 10 13 9 10 7 10 6 13 6 7 
16 9]