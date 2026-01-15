//Write a void function swap(int a, int b) that attempts to swap two numbers.
// Call it in main and print the values. 
//Explain why they didn't swap (Pass by Value).

#include <stdio.h>

void swap(int a, int b)
{
    printf("After swaping\n");
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
}


int main()
{
    int a  = 10, b = 20;
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);

    //calling function
    swap(a,b);

    
    return 0;
}