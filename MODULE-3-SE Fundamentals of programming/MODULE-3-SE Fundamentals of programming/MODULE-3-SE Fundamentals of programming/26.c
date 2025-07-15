//.Convert temperature Fahrenheit to Celsius
# Accept temperature in Fahrenheit from user
fahrenheit = float(input("Enter temperature in Fahrenheit: "))

# Convert to Celsius
celsius = (fahrenheit - 32) * 5 / 9

# Output result
print("Temperature in Celsius:", round(celsius, 2))
