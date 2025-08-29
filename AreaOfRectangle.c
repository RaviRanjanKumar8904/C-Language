// Write a program to calculate the area and perimeter of a rectangle,
// with length and width provided by the user.
#include <stdio.h>
int main()
{
    float l, b;
    printf("Length = ");
    scanf("%f", &l);
    printf("Breadth = ");
    scanf("%f", &b);

    float area;
    area = l * b;

    printf("Area of rectangle = %.3f", area);
    return 0;
}