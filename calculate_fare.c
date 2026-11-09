#include <stdio.h>

/* Function prototype */
double calculateFare(double distance);

int main(void)
{
    double distance, fare;

    printf("Enter the distance traveled (in km): ");
    scanf("%lf", &distance);

    fare = calculateFare(distance);

    printf("\nTotal fare = KSh %.2f\n", fare);

    return 0;
}

/* Returns the total fare for the given distance */
double calculateFare(double distance)
{
    return distance * 50;
}