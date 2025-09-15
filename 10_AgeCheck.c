#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 70)
    {
        printf("You can vote, You are a seinor citizen.");
    }
    else if (age > 50)
    {
        printf("You can vote, You are adult");
    }
    else if (age > 18)
    {
        printf("You must vote, You are young.");
    }
    else
    {
        printf("You can't vote.");
    }

    return 0;
}