// Write a program that asks the user for their name and age and then
// prints a message like "Hello [Name], you are [Age] years old."
#include <stdio.h>
int main()
{
    char name[10];
    int age;

    printf("Enter Your Name: ");
    scanf("%s", &name);
    printf("Enter Your age: ");
    scanf("%d", &age);

    printf("\nHello %s, you are %d years old.", name, age);

    return 0;
}