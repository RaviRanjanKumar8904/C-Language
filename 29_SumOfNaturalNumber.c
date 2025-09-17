#include <stdio.h>
int main()
{
    int n;
    printf("Natural Number add Upto: ");
    scanf("%d", &n);

    // logic
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("%d", sum);
    return 0;
}