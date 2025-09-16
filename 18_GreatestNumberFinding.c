#include<stdio.h>
int main()
{
    //program to find the greatest number out of four number.

    int num1, num2, num3, num4;
    printf("Enter firsr number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    printf("Enter fourth number: ");
    scanf("%d", &num4);

    // applying logic
    if(num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("%d is greatest number",num1);
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("%d is greatest number",num2);
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("%d is greatest number",num3);
    }
    else if(num4 > num1 && num4 > num3 && num4 > num2)
    {
        printf("%d is greatest number",num4);
    }
    return 0;
}