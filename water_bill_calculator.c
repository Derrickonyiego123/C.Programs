#include <stdio.h>

int main(void)
{
    double units, bill;

    /* Prompt the user */
    printf("Enter the number of water units consumed: ");
    scanf("%lf", &units);

    /* Calculate the bill using if-else if-else */
    if (units <= 30)
    {
        bill = units * 20;
    }
    else if (units <= 60)
    {
        bill = (30 * 20) + (units - 30) * 25;
    }
    else
    {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    /* Display the total bill */
    printf("\nTotal bill = KES %.2f\n", bill);

    return 0;
}