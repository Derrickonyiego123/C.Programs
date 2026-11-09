#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret, guess;
    int attempts = 0;

    /* Seed the random number generator so the number differs each run */
    srand((unsigned int)time(NULL));

    /* Generate a random number from 1 to 20 (inclusive) */
    secret = rand() % 20 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("I am thinking of a number between 1 and 20.\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;   /* count every guess */

        if (guess > secret)
        {
            printf("Too high!\n");
        }
        else if (guess < secret)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Congratulations!\n");
        }

    } while (guess != secret);

    printf("You guessed the number in %d attempt(s).\n", attempts);

    return 0;
}