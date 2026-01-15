/*Write a grading system using if-else.

Marks > 90: Grade A

Marks > 80: Grade B

Marks > 70: Grade C

Otherwise: Grade D
*/
#include <stdio.h>
int main()
{
    int Total_Marks;

    printf(":::::::::::::::::check Your Grade .com:::::::::::::::::::::::");
    printf("\nEnter your Total Marks: ");
    scanf("%d", &Total_Marks);

    if (Total_Marks > 90)
    {
        printf("\nGrade 'A'");
    }
    else if (Total_Marks > 80)
    {
        printf("\nGrade 'B'");
    }
    else if (Total_Marks > 70)
    {
        printf("\nGrade 'C'");
    }
    else
    {
        printf("\nGrade 'D'");
    }


    return 0;
}