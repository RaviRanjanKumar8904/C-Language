#include <stdio.h>
int main()
{
    // program to find leap year.
    int year;
    printf("Year: ");
    scanf("%d", &year);

    // applying logic
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is leap Year.",year);
    }
    else
    {
        printf("%d is not leap Year.",year);
    }

    

    printf("\n\n\n");
    // using if else ladder
    if (year % 400 == 0)
    {
        printf("Leap Year.");
    }
    else if(year % 4 == 0 && year % 100 != 100)
    {
        printf("Leap Year.");
    }
    else
    {
        printf("Not Leap Year");
    }

    return 0;
}