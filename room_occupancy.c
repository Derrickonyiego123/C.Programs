#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS  10

int main(void)
{
    int occupancy[FLOORS][ROOMS];
    int occupied, vacant;
    int i, j;

    /* Seed the random number generator */
    srand((unsigned int)time(NULL));

    /* Simulate occupancy data: 1 = occupied, 0 = vacant */
    for (i = 0; i < FLOORS; i++)
    {
        for (j = 0; j < ROOMS; j++)
        {
            occupancy[i][j] = rand() % 2;
        }
    }

    /* Display the occupancy grid */
    printf("Room occupancy (1 = occupied, 0 = vacant)\n\n");
    for (i = 0; i < FLOORS; i++)
    {
        printf("Floor %d: ", i + 1);
        for (j = 0; j < ROOMS; j++)
        {
            printf("%d ", occupancy[i][j]);
        }
        printf("\n");
    }

    /* Count and display occupied and vacant rooms per floor */
    printf("\n%-8s %-10s %-8s\n", "Floor", "Occupied", "Vacant");
    for (i = 0; i < FLOORS; i++)
    {
        occupied = 0;

        for (j = 0; j < ROOMS; j++)
        {
            if (occupancy[i][j] == 1)
            {
                occupied++;
            }
        }

        vacant = ROOMS - occupied;

        printf("%-8d %-10d %-8d\n", i + 1, occupied, vacant);
    }

    return 0;
}