number = int(input("How many terms would you like: "))

pos1 = 0
pos2 = 1
next = pos1 + pos2

for i in range(number):
    print(next)
    pos1 = pos2
    pos2 = next
    next = pos1 + pos2
