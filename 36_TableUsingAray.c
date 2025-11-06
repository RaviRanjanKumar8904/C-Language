#include<stdio.h>
int main()
{
    int TableArray[10], TableNO;

    printf("enter the table no: ");
    scanf("%d",&TableNO);

    for(int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",TableNO, i, TableNO*i);
    }

    return 0;

}