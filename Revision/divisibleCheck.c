// Write a program to check if a number is divisible by both 3 and 5 without using the && (logical AND) operator

#include <stdio.h>
int main()
{
    int NumTray1;
    printf("Number is: ");
    scanf("%d", &NumTray1);

    if (NumTray1 % 3 == 0) // number is divisible is by 3 or not
    {
        // if yes
        if (NumTray1 % 5 == 0) // number is divisible by both 3and 5
        {
            printf("%d is divided by both 3 and 5", NumTray1);
        }

        printf("%d is not divided by both 3 and 5", NumTray1); 
    }
    else
    {
        printf("%d is not divided by both 3 and 5", NumTray1);
    }

    return 0;
}