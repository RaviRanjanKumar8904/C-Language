// Write a program that declares an integer variable age, a float variable height, and a character variable initial.
//  Assign values to them and print each on a new line.
#include <stdio.h>
int main()
{
    int age;
    float height;
    char initial;

    age = 64;
    height = 5.15;
    initial = 'R';

    printf(" age = %d\n height = %.2f\n initial = %c",age,height,initial);
    return 0;
}