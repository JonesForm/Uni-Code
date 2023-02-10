number = int(input("Enter a number for the times table: "))
many = int(input("For how many times: "))


for i in range(1, many + 1):
    print(number, "x", i, "=", number * i)
