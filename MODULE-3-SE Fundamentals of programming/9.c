// Find circumference of Triangle formula : triangle = a + b + c
#include <stdio.h>

int main() {
    double a, b, c, perimeter;

    // User input for the side lengths
    printf("Enter side a: ");
    scanf("%lf", &a);

    printf("Enter side b: ");
    scanf("%lf", &b);

    printf("Enter side c: ");
    scanf("%lf", &c);

    // Compute perimeter
    perimeter = a + b + c;

    // Display result
    printf("Perimeter (Circumference) = %.2f units\n", perimeter);
    return 0;
}
