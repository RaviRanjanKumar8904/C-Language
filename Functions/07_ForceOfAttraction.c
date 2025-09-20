#include <stdio.h>
float Force_of_attraction(float m)
{
    float foa = m * 9.8;
    return foa;
}

int main()
{
    float mass;
    printf("Enter Mass of object>> ");
    scanf("%f",&mass);

    float force = Force_of_attraction(mass);
    printf("\nForce of Attraction = %.1fN", force);
    return 0;
}