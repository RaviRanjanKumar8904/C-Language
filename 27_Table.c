#include<stdio.h>
int main ()
{
    int table;
    printf("Enter Table Number: ");
    scanf("%d",&table);

    //logic
    for(int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d",table,i,table*i);
    }

    return 0;
}