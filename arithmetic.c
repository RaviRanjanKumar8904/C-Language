// Write a program that takes two integer inputs from the user and 
// prints their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int a , b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("sum of a and b is %d\n", a+b);
    printf("difference of a and b is %d\n", a-b);
    printf("product of a and b is %d\n", a*b);
    printf("quotient of a and b is %d", a/b);

    return 0;
}

