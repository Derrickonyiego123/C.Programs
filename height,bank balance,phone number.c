#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[15];

    // Prompt for height
    printf("Enter your height (in meters, e.g. 1.75): ");
    scanf("%f", &height);

    // Prompt for bank balance
    printf("Enter your bank balance (in Kenya Shillings): ");
    scanf("%lf", &bankBalance);

    // Prompt for phone number
    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    // Display the collected details in a clear, formatted manner
    printf("Height:        %.2f m\n", height);
    printf("Bank Balance:  Ksh %.2f\n", bankBalance);
    printf("Phone Number:  %s\n", phoneNumber);
    printf("-------------------------\n");

    return 0;
}