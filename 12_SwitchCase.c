#include<stdio.h>
int main()
{
    //Program to find grade of student give his marks based on.
    int marks;
    printf("Enter total marks: ");
    scanf("%d", &marks);
    
    //using if else if else ladder.

    if (100 >= marks && marks >= 90)
    {
        printf("Grade A");
    }
    else if(90 > marks && marks >= 80)
    {
        printf("Grade B");
    }
    else if (80 > marks && marks >=70)
    {
        printf("Grade C");
    }
    else if (70 > marks && marks >= 60)
    {
        printf("Grade D");
    }
    else if (60 > marks && marks >= 50)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Fail.");
    }





    return 0;
}