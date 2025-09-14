#include<stdio.h>
int main()
{
    // Area of Circle
    printf("AREA OF CIRCLE\n\n");
    float r;
    printf("Enter the Radius of circle: ");
    scanf("%f", &r);

    float AreaOfCircle = 3.14 * (r * r); //calculation

    printf("Area of Circle of Radius %.2f is %.2f", r,AreaOfCircle);



    // Area of Cylender;
    printf("\n\nAREA OF Cylender\n\n");

    float h;
    printf("Height of Cylender: ");
    scanf("%f", &h);

    float AreaOfCylender = (3.14 * (r * r)) * h; // calculation

    printf("Area of Cylinder is %.2f", AreaOfCylender);
    

    return 0;
    

    
}