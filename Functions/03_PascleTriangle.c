#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int combination(int a, int b)
{
    int combi = factorial(a) / (factorial(b) * factorial(a - b));
    return combi;
}

int main()
{
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nError!\nMessage:::Enter postive Number:::");
        return 1;
    }

    for (int i = 0; i <= num; i++)
    {
        for (int k = 0; k < num - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" %d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}