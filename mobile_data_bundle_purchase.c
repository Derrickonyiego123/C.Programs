#include <stdio.h>

int main(void)
{
    int choice;

    /* Display the menu */
    printf("===== DATA BUNDLES =====\n");
    printf("Option   Bundle   Cost (KES)\n");
    printf("1        100 MB   50\n");
    printf("2        500 MB   200\n");
    printf("3        1 GB     350\n");
    printf("4        2 GB     600\n");
    printf("========================\n");

    /* Ask for the user's choice */
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    /* Use switch to display the selected bundle and cost */
    switch (choice)
    {
        case 1:
            printf("\nBundle selected: 100 MB\nCost: KES 50\n");
            break;
        case 2:
            printf("\nBundle selected: 500 MB\nCost: KES 200\n");
            break;
        case 3:
            printf("\nBundle selected: 1 GB\nCost: KES 350\n");
            break;
        case 4:
            printf("\nBundle selected: 2 GB\nCost: KES 600\n");
            break;
        default:
            printf("\nInvalid choice\n");
            break;
    }

    return 0;
}