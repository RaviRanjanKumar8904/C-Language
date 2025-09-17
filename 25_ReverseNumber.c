#include <stdio.h>
int main()
{
    // Reverse number.
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    // logic
    int rev = 0, reminder;
    while (num != 0)
    {
        reminder = num % 10;
        rev = (rev * 10) + reminder;
        num /= 10;
    }

    printf("Reversed is %d",rev);

    return 0;
}