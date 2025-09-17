#include <stdio.h>
int main()
{
    // program to find factorial;
    int num;
    printf("Factorial of: ");
    scanf("%d", &num);

    // logic
    int factorial = 1;

    
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is %d", num, factorial);

    return 0;
}