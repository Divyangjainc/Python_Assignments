//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
//Using third variable
# Accepting input
a = int(input("Enter first number (a): "))
b = int(input("Enter second number (b): "))

# Swapping using a third variable
temp = a
a = b
b = temp

print("After swapping using third variable:")
print("a =", a)
print("b =", b)

//Without using third variable
# Accepting input
a = int(input("Enter first number (a): "))
b = int(input("Enter second number (b): "))

# Swapping without using third variable
a = a + b
b = a - b
a = a - b

print("After swapping without using third variable:")
print("a =", a)
print("b =", b)
