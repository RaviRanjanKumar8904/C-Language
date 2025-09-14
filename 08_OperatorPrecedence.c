#include<stdio.h>
int main()
{
    int a = 3;
    int b = 6;
    int c = 9;

    // operator precedence
    printf("Value of a * b / c is %d\n", a * b / c);
    printf("Value of a / b * c is %d\n", a / b * c);
    printf("Value of a * b / c + 1 is %d\n", a * b / c + 1);
    

    return 0;
}