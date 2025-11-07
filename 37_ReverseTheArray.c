#include <stdio.h>

void reverseArray(int Array[], int size)
{
    if (size <= 0)
    {
        printf("Empty array found.");
        return;
    }

    int leftpointer = 0;
    int rigtpointer = size - 1;

    printf("\n\nReversing the array...");
    printf("\n........................");

    for (; leftpointer < rigtpointer;)
    {
        int temp = Array[leftpointer];

        Array[leftpointer] = Array[rigtpointer];

        Array[rigtpointer] = temp;

        leftpointer++;
        rigtpointer--;
    }
    printf("\n...................sucess");

    // printing
    printf("\n[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", Array[i]);
    }
    printf("] ");
}

int main()
{
    int noOfElemen;

    printf("No of element in Array: ");
    scanf("%d", &noOfElemen);
    
    int arr[noOfElemen];
    printf("\nEnter element one by one.\n");
    for (int i = 0; i < noOfElemen; i++)
    {
        printf("Enter index %d position no: ", i);
        scanf("%d", &arr[i]);
    }

    int noOfElement = sizeof(arr) / sizeof(arr[0]);
    printf("Original array\n");
    printf("[ ");
    for (int i = 0; i < noOfElement; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("] ");

    reverseArray(arr, noOfElement);

    return 0;
}