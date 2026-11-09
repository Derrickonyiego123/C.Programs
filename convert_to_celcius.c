#include <stdio.h>

/* Function prototype */
double convertToCelsius(double fahrenheit);

int main(void)
{
    double fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("\nTemperature in Celsius = %.2f\n", celsius);

    return 0;
}

/* Converts Fahrenheit to Celsius using C = (F - 32) x 5 / 9 */
double convertToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}