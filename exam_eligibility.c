#include <stdio.h>

int main(void)
{
    double attendance, averageMarks;

    /* User-friendly prompts */
    printf("Enter the student's attendance (%%): ");
    scanf("%lf", &attendance);

    printf("Enter the student's average marks: ");
    scanf("%lf", &averageMarks);

    /* Both conditions must be true */
    if (attendance >= 75 && averageMarks >= 40)
    {
        printf("\nEligible for final exams.\n");
    }
    else
    {
        printf("\nNot eligible.\n");
    }

    return 0;
}