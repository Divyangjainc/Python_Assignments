// Find area of Rectangle Formula : A=wl
#include <stdio.h>

int main() {
    int length, width, area;

    // Prompt user for dimensions
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area
    area = length * width;

    // Display result
    printf("Area of the rectangle = %d square units\n", area);
    return 0;
}
