//Create an array of size 10 but only initialize the first 3 elements. 
//Print the value of the 5th element. 
//What value do you get? (Is it 0 or garbage?).

#include <stdio.h>
int main()
{
    int arr[10] = {10,20,30};

    printf("value at index 5 is %d",arr[5]);

    return 0;


    // output is showing 0.
}