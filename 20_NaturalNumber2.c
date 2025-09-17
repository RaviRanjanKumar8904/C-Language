#include <stdio.h>
int main()
{
    int n = 1, i;
    printf("Print Natural Number upto: ");
    scanf("%d", &i);

    if (i < 1)
    {
        printf("Invaid Entry!\n\nREMBEMBER!\nNatural Number is starting from 1.");
    }
    else
    {
        do
        {
            printf("%d\n", n);
            n++;
            i--;
        } while (i >= 1);
    }

    return 0;
}