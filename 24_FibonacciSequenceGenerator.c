#include <stdio.h>
int main()
{
    // Fibonacci Sequence Generator.
    int num;
    printf("Enter Number to Print Fibonacci Series Upto: ");
    scanf("%d", &num);

    // logic;
    int current = 0, rev = 1, printint;
    if (num < 1)
    {
        printf("Invalid Entry!\nEnter Positive Value.");
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {

            printf(" %d", current);
            printint = current + rev;
            rev = current;
            current = printint;
        }
    }

    return 0;
}