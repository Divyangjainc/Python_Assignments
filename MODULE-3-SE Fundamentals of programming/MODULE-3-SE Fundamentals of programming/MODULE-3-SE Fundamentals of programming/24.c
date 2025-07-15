//.Accept 5 employees name and salary and count average and total salary
# Initialize empty lists
employee_names = []
employee_salaries = []

# Input data for 5 employees
for i in range(5):
    name = input(f"Enter name of employee {i+1}: ")
    salary = float(input(f"Enter salary of {name}: "))
    
    employee_names.append(name)
    employee_salaries.append(salary)

# Calculate total and average salary
total_salary = sum(employee_salaries)
average_salary = total_salary / len(employee_salaries)

# Output
print("\n--- Employee Salary Details ---")
for i in range(5):
    print(f"{employee_names[i]}: {employee_salaries[i]}")

print("\nTotal Salary =", total_salary)
print("Average Salary =", round(average_salary, 2))
