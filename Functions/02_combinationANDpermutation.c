#include <stdio.h>

// this function calculate the factorial
long factorial(int a)
{
    int facto = 1;
    for (int i = 1; i <= a; i++)
    {
        facto *= i;
    }
    return facto;
}

int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n); // take n

    printf("Enter r: ");
    scanf("%d", &r); // take r

    if (n < 0 || r < 0) // filter negative values
    {
        printf("Error! \nMessage: Must be greater than 0");
        return 1; // exit with error message
    }
    else if (n < r) // check what n is greater than r or not?
    {
        printf("Error! \nMessage: Value of n is always greater than r.");
        return 1;
    }

    long Combination = factorial(n) / (factorial(r) * factorial(n - r)); //   n!/(r! * (n-r)!)
    printf("\nCombination :: %d", Combination);

    long Permutation = factorial(n) / factorial(n - r); //  n! / (n-r)!
    printf("\nPermutation :: %d", Permutation);

    return 0;
}