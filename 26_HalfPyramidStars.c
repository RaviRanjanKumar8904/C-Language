#include <stdio.h>
int main()
{
    /*

    *
    * *
    * * *
    * * * *
    * * * * *

    */

    // Taking input.
    int num;
    printf("Enter rows of Star: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) // make Rows
    {
        for (int j = 1; j <= i; j++) // make column
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}