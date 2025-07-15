//.Convert minutes into seconds and hours
# Accept minutes from user
minutes = float(input("Enter minutes: "))

# Convert to seconds and hours
seconds = minutes * 60
hours = minutes / 60

# Output result
print(f"{minutes} minutes is equal to {seconds} seconds")
print(f"{minutes} minutes is equal to {round(hours, 2)} hours")
