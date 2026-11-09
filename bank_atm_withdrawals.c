#include <stdio.h>

int main(void)
{
    double balance, amount;

    /* Get the starting balance */
    printf("Enter the initial account balance (KES): ");
    scanf("%lf", &balance);

    /* Keep allowing withdrawals while the balance is greater than 0 */
    while (balance > 0)
    {
        printf("\nEnter the amount to withdraw: ");
        scanf("%lf", &amount);

        balance = balance - amount;

        printf("Balance after withdrawal: KES %.2f\n", balance);
    }

    printf("\nBalance is zero or negative. No further withdrawals allowed.\n");

    return 0;
}