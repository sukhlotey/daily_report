number = int(input("Enter a factorial number: "))
fac = 1

for i in range(1, number + 1):
    fac *= i

print("Factorial of", number, "is", fac)
