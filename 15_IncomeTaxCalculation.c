#include <stdio.h>
int main()
{
    // calculation of income tax.
    printf("calculation of income tax.\n\n");
    int income, tax;
    // takeing input
    printf("Your Salary: ");
    scanf("%d",&income);

    // applying logic.

    if (income < 250000)
    {
        printf("You are not in TAX slab.");
    }
    else if (income <= 500000)
    {
        tax = ((income - 250000) * 5) / 100;
        printf("Your total tax amount is %d", tax);
    }
    else if (income <= 1000000)
    {
        tax = ((250000 * 5) / 100) + (((income - 500000) * 20) / 100);
        printf("Your toral tax amount is %d", tax);
    }
    else if (income > 1000000)
    {
        tax = ((250000 * 5) / 100) + ((500000 * 20) / 100) + (((income - 1000000) * 30) / 100);
        printf("Your total tax amount is %d", tax);
    }
    else
    {
        printf("Invalid entry");
    }

    return 0;
}