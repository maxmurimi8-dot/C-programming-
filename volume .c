
#include <stdio.h>

int main() {
    float radius, height;
    float volume, surfaceArea;
    const float PI = 3.14159;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    surfaceArea = (2 * PI * radius * radius) +
                  (2 * PI * radius * height);

    printf("\n--- CYLINDER RESULTS ---\n");
    printf("Radius = %.2f\n", radius);
    printf("Height = %.2f\n", height);
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}
    