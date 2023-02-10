number = int(input("Enter a number to be reversed: "))

original = number
rev = 0

while number > 0:
    rev = rev * 10 + number % 10
    number //= 10

print("Your number ", original, "Reversed is ", rev)