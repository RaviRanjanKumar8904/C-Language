//Write a function updateValue(int *p) that accepts a pointer. 
//In main, declare int x = 10. Pass the address of x to the function. 
//Inside the function, use the dereference operator * to change the value of x to 100. 
//Verify the change in main.

#include <stdio.h>

void updateValue(int *a)
{
    *a = 100;

}

int main()
{
    int x = 10;

    updateValue(&x); //call function by refrence.

    printf("Updated value of x is %d",x);

    return 0;


}