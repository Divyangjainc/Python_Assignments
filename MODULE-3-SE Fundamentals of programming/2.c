//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Simple Calculator\n");
    printf("-----------------\n");

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // space before %c to ignore leftover newline

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculation
    switch (operator) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Error: Modulo by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}