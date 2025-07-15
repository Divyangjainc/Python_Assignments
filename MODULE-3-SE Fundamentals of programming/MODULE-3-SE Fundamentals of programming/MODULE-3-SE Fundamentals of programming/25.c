//.Accept 5 expense from user and find average of expense
# Initialize an empty list for expenses
expenses = []

# Input 5 expense values
for i in range(5):
    amount = float(input(f"Enter expense {i+1}: "))
    expenses.append(amount)

# Calculate average
total_expense = sum(expenses)
average_expense = total_expense / len(expenses)

# Output result
print("\nTotal Expense =", total_expense)
print("Average Expense =", round(average_expense, 2))
