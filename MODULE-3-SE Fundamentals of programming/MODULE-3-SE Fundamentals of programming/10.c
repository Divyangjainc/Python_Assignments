// find the area of a rectangular prism formula A=2(wl+hl+hw)
#include <stdio.h>

int main() {
    double length, width, height, surface_area;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);

    printf("Enter height: ");
    scanf("%lf", &height);

    surface_area = 2 * (width * length + height * length + height * width);

    printf("Surface Area = %.2f square units\n", surface_area);
    return 0;
}
