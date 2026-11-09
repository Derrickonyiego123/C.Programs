#include <stdio.h>

int main(void)
{
    int password;

    do
    {
        printf("Enter the password: ");
        scanf("%d", &password);

        if (password != 1234)
        {
            printf("Incorrect password. Try again.\n\n");
        }

    } while (password != 1234);

    printf("\nAccess Granted\n");

    return 0;
}