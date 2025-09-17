#include <stdio.h>
int main()
{
    // Prime Number check
    int num;
    printf("Enter Number to check: ");
    scanf("%d", &num);

    // logic
    int check = 0;
    if (num < 1)
    {
        printf("Invalid Entry!\n\nRemember!\nWrite Positive Number.");
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                check++;
            }
        }
    }

    if (check <= 2)
    {
        printf("It's a Prime Number.");
        
    }
    else
    {
        printf("It's a Not a Prime Number");
    }

    return 0;
}