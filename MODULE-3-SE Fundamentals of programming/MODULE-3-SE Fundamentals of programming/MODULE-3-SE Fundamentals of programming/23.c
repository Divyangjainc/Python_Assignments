//WAP to calculate swap 2 numbers with using of multiplication and division.
# Accept input from user
a = float(input("Enter first number (a): "))
b = float(input("Enter second number (b): "))

# Swap using multiplication and division
a = a * b
b = a / b
a = a / b

# Output result
print("After swapping using multiplication and division:")
print("a =", a)
print("b =", b)
