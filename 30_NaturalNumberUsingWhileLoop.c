#include <stdio.h>
int main()
{
    int n;
    printf("Add Natural Number Upto: ");
    scanf("%d", &n);
    printf("Sum of First %d Natural Number is : ", n);
    // logic
    int sum = 0;

    if (n < 1)
    {
        printf("Invaid Entry!\n\nREMBEMBER!\nNatural Number is starting from 1.");
    }
    else
    {
        while (n >= 1)
        {
            sum += n;
            n--;
        }
    }
    printf("%d", sum);

    return 0;
}