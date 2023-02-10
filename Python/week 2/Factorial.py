import math

number = int(input("Enter a positive integer: "))

sum = 1

for i in range(1, number+1):
    sum *= i

print(sum)
# using functon from math
print(math.factorial(number))
