#include <stdio.h>
int main()
{
    int n = 1, i;
    printf("Print Natural Number upto: ");
    scanf("%d", &i);

    do
    {
        printf("%d\n", n);
        n++;
        i--;
    } while (i >= 1);

    return 0;
}