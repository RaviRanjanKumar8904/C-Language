#include <stdio.h>
#include <stdlib.h>
// program to calculate the average of numbers.

// function
int average(int n)
{
    int avg = 0;
    int number;
    if (n < 1)
    {
        printf("\nError!! Please check the number and try agian");
        exit(1);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %dth number:: ", i);
        scanf("%d", &number);
        avg += number;
    }
    avg = avg / n;
    return avg;
}

int main()
{
    int n;
    printf("How many numbers you have:: ");
    scanf("%d", &n);

    int avg = average(n);
    printf("\nAverage is %d", avg);
    return 0;
}