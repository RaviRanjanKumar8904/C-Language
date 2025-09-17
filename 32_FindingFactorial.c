#include <stdio.h>
int main()
{
    // program to find factorial;
    int num;
    printf("Factorial of: ");
    scanf("%d", &num);

    // logic
    int factorial = 1;

    
   if (num < 1)
    {
        printf("Invalid Entry!\n\nRemember it!\nFactorial is calculated only for Positive Number.");
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
         printf("Factorial of %d is %d", num, factorial);
    }

   

    return 0;
}