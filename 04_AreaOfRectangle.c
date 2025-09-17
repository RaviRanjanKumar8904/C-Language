#include <stdio.h>
int main()
{
    // Program to calcule the area of rectangle.
    // A] Using Hard coded input.

    int length = 12, Breadth = 15;

    int Area = length * Breadth; // Calculation of area

    // printing the result
    printf("Area of Rectangle is %d\n\n", Area);

    // B] Using input supplied by user.
    int len, bre;
    printf("Enter the length of rectangle: ");
    scanf("%d", &len);

    printf("Enter the breadth of rectangle: ");
    scanf("%d", &bre);

    int area = len * bre; // calculation of area

    // printing result
    printf("Area of rectangle is %d", area);

    return 0;
}