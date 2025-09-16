#include<stdio.h>
int main()
{
    //natural number from 10 to 20 when initial loop counter is initialized to 0.
    int i = 0;

    while(i <= 20)
    {
        if(i>=10)
        {
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}