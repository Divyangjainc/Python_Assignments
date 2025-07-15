//Accept 2 numbers and find out its sum check it size
# Accept two numbers from user
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Calculate sum
total = num1 + num2

# Print sum
print("Sum =", total)

# Check size of the sum
if total < 50:
    print("Sum is small.")
elif total <= 100:
    print("Sum is medium.")
else:
    print("Sum is large.")
