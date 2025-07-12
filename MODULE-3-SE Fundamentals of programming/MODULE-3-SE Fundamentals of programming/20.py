def calculate_remaining_salary():
    try:
        # Accept input from user
        salary_input = input("Enter your gross monthly salary: ")
        salary = float(salary_input)
        
        # Calculate deductions
        insurance = 0.10 * salary
        loan = 0.10 * salary
        
        # Compute remaining salary
        remaining = salary - (insurance + loan)
        
        # Display results
        print(f"\nGross Salary:      {salary:.2f}")
        print(f"Insurance (10%):   {insurance:.2f}")
        print(f"Loan Installment (10%): {loan:.2f}")
        print(f"Remaining Salary:  {remaining:.2f}")
        
    except ValueError:
        print("⚠️  Invalid input. Please enter a numeric value for salary.")

if __name__ == "__main__":
    calculate_remaining_salary()
