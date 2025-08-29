// Write a program to swap the values of two integer variables without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swaping\n a = %d\n b = %d", a, b);

    return 0;
}