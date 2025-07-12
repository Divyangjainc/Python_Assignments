//.Find circumference of square formula : C = 4 * a
#include <stdio.h>

int main() {
    double a, perimeter;

    printf("Enter the side length of the square: ");
    scanf("%lf", &a);

    perimeter = 4 * a;

    printf("Perimeter (Circumference) = %.2f units\n", perimeter);
    return 0;
}
if (a < 0) {
    printf("Error: side length cannot be negative.\n");
    return 1;
}
