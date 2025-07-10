//Find Area of Cube formula : a = 6a2
#include <stdio.h>

int main() {
    float side, surfaceArea;

    // Input
    printf("Enter the length of a side of the cube: ");
    scanf("%f", &side);

    // Calculation
    surfaceArea = 6 * side * side;

    // Output
    printf("Surface area of the cube = %.2f\n", surfaceArea);

    return 0;
}
