#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS   5
#define ROOMS    10

int main(void)
{
    int chain[BRANCHES][FLOORS][ROOMS];
    int branchOccupied, totalOccupied = 0;
    int b, f, r;

    /* Seed the random number generator */
    srand((unsigned int)time(NULL));

    /* Assign random occupancy: 1 = occupied, 0 = vacant */
    for (b = 0; b < BRANCHES; b++)
    {
        for (f = 0; f < FLOORS; f++)
        {
            for (r = 0; r < ROOMS; r++)
            {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    /* Count occupied rooms in each branch and across the chain */
    for (b = 0; b < BRANCHES; b++)
    {
        branchOccupied = 0;

        for (f = 0; f < FLOORS; f++)
        {
            for (r = 0; r < ROOMS; r++)
            {
                if (chain[b][f][r] == 1)
                {
                    branchOccupied++;
                }
            }
        }

        printf("Branch %d: %d occupied rooms out of %d\n",
               b + 1, branchOccupied, FLOORS * ROOMS);

        totalOccupied = totalOccupied + branchOccupied;
    }

    /* Display the total across all branches */
    printf("\nTotal occupied rooms across all branches: %d out of %d\n",
           totalOccupied, BRANCHES * FLOORS * ROOMS);

    return 0;
}