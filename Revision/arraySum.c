//Write a program to calculate the sum of all elements in an array of 
//size 10 using a loop. Then, try to access the element at index 15. 
//Record the behavior (Segmentation Fault or Garbage Value).

#include <stdio.h>
int main()
{
    int arr[10];

    printf("Enter number.\n");

    for (int i = 0; i < 10;i++)
    {
        printf("Index at %d: ",i);
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < 10;i++)
    {
        sum += arr[i];
    }

    printf("Sum of all 10 element of array is %d",sum);


    //trying to acces the index outside the array.
    printf("\nnumber at index 15 is %d",arr[15]);

    // it giving the garbage value.

    return 0;


}