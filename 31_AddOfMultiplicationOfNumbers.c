#include <stdio.h>
int main()
{
    int table;
    printf("Enter Table NO: ");
    scanf("%d", &table);

    // logic
    int multiplication, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        multiplication = table * i;
        sum += multiplication;
    }

    printf("Sum of multiple of %d id %d", table, sum);

    return 0;
}