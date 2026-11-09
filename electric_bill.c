#include <stdio.h>

/* Function prototype */
double calculateElectricBill(double units);

int main(void)
{
    double units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%lf", &units);

    bill = calculateElectricBill(units);

    printf("\nTotal bill = KSh %.2f\n", bill);

    return 0;
}

/* Returns the total bill for the given number of units */
double calculateElectricBill(double units)
{
    double bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}