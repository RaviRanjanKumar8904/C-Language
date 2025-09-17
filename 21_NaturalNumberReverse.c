#include <stdio.h>
int main()
{
    int n;
    printf("Print Reverse Natural Number Upto: ");
    scanf("%d", &n);
    int copyN = n;
    // LOGIC
    if (n < 1)
    {
        printf("Invaid Entry!\n\nREMBEMBER!\nNatural Number is starting from 1.");
    }
    else
    {
        for (int i = 0; i < copyN; i++)
        {
            printf("%d\n", n);
            n--;
        }
    }
    return 0;
}