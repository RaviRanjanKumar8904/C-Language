#include <stdio.h>
int main()
{
    int num;
    printf("Enter table number: ");
    scanf("%d", &num);

    // logic
    for (int i = 10; i >= 1; i--)
    {
        printf("\n%d x %d = %d",num,i,num*i);

    }

    return 0;
}