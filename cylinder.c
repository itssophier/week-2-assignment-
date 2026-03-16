#include <stdio.h>

int main() {
    float radius, height;
    float volume, surface_area;
    float pi = 3.142;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;

    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surface_area);

    return 0;
}
