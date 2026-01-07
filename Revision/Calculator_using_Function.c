//clculator using function
#include <stdio.h>

float sum(float a, float b)
{
    float sum = a + b;
    return sum;
}
float sub(float a, float b)
{
    float sub = a - b;
    return sub;
}
float Multiply(float a, float b)
{
    float Multiply = a * b;
    return Multiply;
}
float Divide(float a, float b)
{
    float Divide = a / b;
    return Divide;
}

int main()
{
    printf("Welcome... Calculator is loading");
    printf("\n START NoW\n");

    float a,b;
    char op;
    printf("Enter Operator: ");
    scanf("%c", &op); 

    printf("Enter 1st number: ");
    scanf("%f", &a);
    
    printf("Enter 2nd number: ");
    scanf("%f", &b);


    printf("\n\nStarting Calculation engine./././.");
    for(int i = 0; i<=3; i++)
    {
        printf(".....\n");
        i++;
    }

    if(op == '+')
    {
        printf("Sum of %.1f and %.1f is %.1f", a, b, sum(a,b));
    }
    else if(op == '-')
    {
        printf("Sub of %.1f and %.1f is %.1f", a, b, sub(a,b));
    }
    else if(op == '*')
    {
        printf("Multiply of %.1f and %.1f is %.1f", a, b, Multiply(a,b));
    }
    else if(op == '/')
    {
        printf("Divide of %.1f and %.1f is %.1f", a, b, Divide(a,b));
    }
    else
    {
        printf("INVALID OPERATOR!\n Enter valid character.");
    }

    return 0;

}