//: Write a program that checks if a number input by the user is positive, negative, or zero.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number to check Postive/Negetive/zero: ");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("\nThe number is Postive.");
    }
    else if( num < 0)
    {
        printf("\nThe number is Negative.");
    }
    else
    {
        printf("\nThe number is Zero.");
    }


    return 0;
}