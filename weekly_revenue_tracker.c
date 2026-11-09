#include <stdio.h>

#define DAYS 7

int main(void)
{
    double revenue[DAYS];
    double total = 0, average;
    int i;

    /* Input the revenue for each day */
    printf("Enter the hotel's revenue for each day of the week:\n");
    for (i = 0; i < DAYS; i++)
    {
        printf("Day %d: KSh ", i + 1);
        scanf("%lf", &revenue[i]);
    }

    /* Calculate the total weekly revenue */
    for (i = 0; i < DAYS; i++)
    {
        total = total + revenue[i];
    }

    /* Calculate the average daily revenue */
    average = total / DAYS;

    /* Display the results */
    printf("\nTotal weekly revenue  = KSh %.2f\n", total);
    printf("Average daily revenue = KSh %.2f\n", average);

    return 0;
}