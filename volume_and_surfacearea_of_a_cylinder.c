#include <stdio.h>

#define PI 3.14159265358979

int main(void)
{
    double radius, height, volume, surfaceArea;

    /* Prompt the user for input */
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    /* Apply the formulae */
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;  /* A = 2pr² + 2prh */
    volume      = PI * radius * radius * height;                        /* V = pr²h */

    /* Display the results */
    printf("\nSurface area = %.2f\n", surfaceArea);
    printf("Volume       = %.2f\n", volume);

    return 0;
}