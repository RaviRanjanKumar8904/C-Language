// Write a program that takes a character as input and prints its ASCII value
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("\nASCII value of %c is %d", ch, ch);

    return 0;
}