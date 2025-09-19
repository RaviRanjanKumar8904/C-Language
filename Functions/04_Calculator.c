#include <stdio.h>
#include <stdlib.h>
//  Simple Calculator Function

// Write a function calculate that takes two int operands and a char operator (+, -, *, /) as input. The
// function should perform the corresponding arithmetic operation and return the result. How would you handle
//  the case of division by zero?

// function
int calculator(int a, char op, int b)
{
    int result;
    switch (op)
    {
    case '+':
        result = a + b;
        return result;
    case '-':
        result = a - b;
        return result;

    case '*':
        result = a * b;
        return result;

    case '/':
        if (b == 0)
        {
            printf("\nError! Undefine!!!");
            exit(1);
        }
        result = a / b;
        return result;

    default:
        printf("\nEnter Valid Character!!!.");
        exit(1);
    }
}

int main()
{
    int num1, num2; // assinging varuable
    char operator;  // assinging vatiable

    // taking input
    printf("Enter first value: ");
    scanf("%d", &num1);

    printf("Enter second value: ");
    scanf("%d", &num2);

    printf("Enter Operator: ");
    scanf(" %c", &operator);

    int solution = calculator(num1, operator, num2); // calling fumction
    printf("\nSolution >> %d", solution);
    return 0;
}