//WAP to Find Area And Circumference of Circle
#include <stdio.h>
#define PI 3.14159  // Define constant value for π

int main() {
    float radius, area, circumference;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output
    printf("Area of the circle        = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
