#include<stdio.h>
int main() 
{
    int arr[10];

    for(int i = 0; i < 3; i++)
    {
        printf("Enter the value of arr[%d]= ", i);
        scanf("%d",&arr[i]);
    }

    // for(int i = 0; i < 10; i++)
    // {
    //     printf(" %d",arr[i]);
        
    // }
  
    int* point = arr; //this will access the 0th index of array.

    point++;
    point++;
    
    printf("%d",*point);
    

    return 0;
}