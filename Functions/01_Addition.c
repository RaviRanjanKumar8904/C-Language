#include <stdio.h>

// 1. Function Declaration (Prototype)
// Tells main() that a function named 'add' exists.
int add(int, int);

// The main function where the program execution begins
int main() {
    int num1 = 15;
    int num2 = 25;
    int sum;

    // 3. Function Call
    // The values of num1 and num2 are passed as arguments.
    // The returned value from add() is stored in the 'sum' variable.
    sum = add(num1, num2);

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

// 2. Function Definition
// This is the actual code for the 'add' function.
// Here 'x' and 'y' are the parameters.
int add(int x, int y) {
    int result = x + y;
    // The function returns the calculated result.
    return result;
}