#include <stdio.h>

int main(void)
{
    int age;
    double annualIncome;

    /* User-friendly prompts */
    printf("Enter your age (in years): ");
    scanf("%d", &age);

    printf("Enter your annual income (in Sh): ");
    scanf("%lf", &annualIncome);

    /* Both conditions must be true to qualify */
    if (age >= 21 && annualIncome >= 21000)
    {
        printf("\nCongratulations you qualify for a loan.\n");
    }
    else
    {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}