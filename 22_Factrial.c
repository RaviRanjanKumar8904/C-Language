#include <stdio.h>
int main()
{
    // factorial calculator
    int num, fact = 1;
    printf("Enter Number to print factorial: ");
    scanf("%d", &num);

    // logic
    if (num < 1)
    {
        printf("Invalid Entry!\n\nRemember it!\nFactorial is calculated only for Positive Number.");
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("\nFacorial = %d", fact);
    }

    

    return 0;
}