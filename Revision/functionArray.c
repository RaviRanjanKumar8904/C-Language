// Write a function square(int n) that returns the square of a number.
// Call it from main.

#include <stdio.h>

int square()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    // result
    return num * num;
}


int main()
{
    int sq = square();
    printf("Square is : %d", sq);

    return 0;
}
