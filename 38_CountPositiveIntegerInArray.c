#include <stdio.h>

void Counting(int arr[], int size)
{
    int positveCount = 0, negativeCount = 0;
    

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positveCount++;
        }

        if (arr[i] < 0)
        {
            negativeCount++;
        }
    }

    printf("\nTotal positive number: %d", positveCount);
    printf("\nTotal positive number: %d", negativeCount);
}

int main()
{
    int num;
    printf("Total number of element: ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("enter the %d indexing number: ", i);
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    Counting(arr, size);
    return 0;
}