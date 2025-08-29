// Write a program to calculate the area of a circle. The radius should be a user input.
// Use a #define directive to declare the constant PI as 3.14.

#include <stdio.h>
#define pi 3.14
int main()
{

    float r;
    printf("Radius = ");
    scanf("%f", &r);

    float area;
    area = pi * (r * r);

    printf("Area of circle = %.3f", area);

    return 0;
}
