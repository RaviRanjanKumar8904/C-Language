#include <stdio.h>
int main()
{
    int n;
    printf("Print Reverse Natural Number Upto: ");
    scanf("%d", &n);
    int copyN = n;
    // LOGIC
    for (int i = 0; i < copyN; i++)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}