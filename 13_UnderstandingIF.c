#include<stdio.h>
int main()
{
    int a = 10;
    if(a = 11) // here a is assinging 11, in c non zero value is consider as true , that's why if condition is print
    {
        printf("I am 11 year old.");
    }
    else
    {
        printf("I am not 11 year old.");
    }

    return 0;
}