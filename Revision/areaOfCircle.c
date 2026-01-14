//create a program that calculates the area of a circle where PI is a const float set to 3.14159.
#include <stdio.h>
int main()
{
    float pi = 3.14159;
    float radius;
    printf("Radius of circle = ");
    scanf("%f",&radius);

    float AreaOfCircle = pi * (radius * radius);

    printf("\nArea of circle is %.3f",AreaOfCircle);
    return 0;
}
