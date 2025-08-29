// Write a program to swap the values of two integer variables using a third temporary variable.
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("after swaping\n a = %d\n b = %d",a,b);

    return 0;
}