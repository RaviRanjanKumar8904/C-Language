// Write a program that declares an int, float, double, and char.
// Print the size of each variable in bytes using the sizeof() operator.

#include <stdio.h>
int main()
{
    char name;
    int age;
    float weight;
    double mobileNo;


    printf("\nsize of char is %d", sizeof(name));
    printf("\nsize of int is %d", sizeof(age));
    printf("\nsize of float is %d", sizeof(weight));
    printf("\nsize of double is %d", sizeof(mobileNo));


    return 0;

}