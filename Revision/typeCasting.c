//Write a program to divide two integers, a = 5 and b = 2. First, print the result as an integer (expected: 2). 
//Then, perform type casting to print the accurate decimal result (expected: 2.5).
#include <stdio.h>
int main()
{

    int a = 5;
    int b = 2;

    int divide = a/b;
    printf("%d / %d = %d",a,b,divide);

    printf("\n\nafter typecasting.\n\n");

    
    printf("%d / %d = %.1f",a,b,(float)a/b);

    return 0;

}