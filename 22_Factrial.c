#include<stdio.h>
int main()
{
    //factorial calculator
    int num,fact = 1;
    printf("Enter Number to print factorial: ");
    scanf("%d",&num);

    //logic
    for(int i = 1; i <= num; i++)
    {
        fact *= i;

    }

    printf("\nFacorial = %d",fact);

    return 0;
}