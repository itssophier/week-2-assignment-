#include <stdio.h>

int main() {
    float radius, height;
    float volume, surface_area;
    float pi = 3.142;
//enter the radius 
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
//enter the height
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
//formula of the volume and the surface area of the cylinder
    volume = pi * radius * radius * height;
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
//display output
    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surface_area);

    return 0;
}
