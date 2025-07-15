//Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
# Accept input from user
P = float(input("Enter the Principal amount (P): "))
R = float(input("Enter the Annual Interest Rate (R in %): "))
t = float(input("Enter the Time (t in years): "))

# Calculate Amount
A = P * (1 + R / 100) ** t

# Calculate Compound Interest
CI = A - P

# Display results
print("Compound Interest =", round(CI, 2))
print("Total Amount =", round(A, 2))
