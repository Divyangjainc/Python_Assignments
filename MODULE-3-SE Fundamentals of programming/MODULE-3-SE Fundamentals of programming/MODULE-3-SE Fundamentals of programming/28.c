//.Convert years into days and months
# Accept number of years from user
years = float(input("Enter number of years: "))

# Convert to months and days
months = years * 12
days = years * 365  # Approximate, not accounting for leap years

# Output result
print("Equivalent Months:", round(months, 2))
print("Equivalent Days:", round(days, 0))
