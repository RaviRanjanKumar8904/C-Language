//Create a simple calculator that takes two integers as input and prints their sum and product.
#include <stdio.h>
int main()
{
    int num1,num;
    printf("First Number: ");
    scanf("%d",&num);
    printf("Second Number: ");
    scanf("%d",&num1);

    int sum = num + num1;
    int product = num * num1;

    //printing
    printf("\nSum of %d and %d is %d",num,num1, sum);
    printf("\nProduct of %d and %d is %d",num,num1, product);

    return 0;
}