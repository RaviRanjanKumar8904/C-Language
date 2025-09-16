#include<stdio.h>
int main()
{
    //find the lowercase number
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // logic;
    if(ch >= 97 && ch <= 122)
    {
        printf("its ASCII value is %d and it is lower case.", ch);
    }
    else
    {
        printf("its ASCII value is %d and it is not lower case.", ch);
    }

    return 0;
}