//WAP to convert years into days and days into years
# Constants
DAYS_IN_YEAR = 365  # Approximate, ignoring leap years

# Function to convert years to days
def years_to_days(years):
    return years * DAYS_IN_YEAR

# Function to convert days to years
def days_to_years(days):
    return days / DAYS_IN_YEAR

# User input
choice = input("Choose conversion:\n1. Years to Days\n2. Days to Years\nEnter 1 or 2: ")

if choice == '1':
    years = float(input("Enter number of years: "))
    days = years_to_days(years)
    print(f"{years} years is approximately {round(days)} days.")
elif choice == '2':
    days = float(input("Enter number of days: "))
    years = days_to_years(days)
    print(f"{days} days is approximately {round(years, 2)} years.")
else:
    print("Invalid choice! Please enter 1 or 2.")
