number = int(input("Enter a number to check if a palindrome or not: "))

original = number
rev = 0
while number > 0:
    rev = rev * 10 + number % 10
    number = number // 10

if original == rev:
    print("The number is a palindrome")
else:
    print("The number is not a palindrome")