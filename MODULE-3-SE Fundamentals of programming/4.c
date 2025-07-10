//Find Area of Square formula : a = a2
#include <stdio.h>

int main() {
    float side, area;

    // Input
    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);

    // Calculation
    area = side * side;

    // Output
    printf("Area of the square = %.2f\n", area);

    return 0;
}
