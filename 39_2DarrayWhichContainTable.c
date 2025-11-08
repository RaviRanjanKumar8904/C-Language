#include <stdio.h>

int main()
{
    int array2d[10][3];

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                array2d[i - 1][j] = 2 * i;
            }
            else if (j == 1)
            {
                array2d[i - 1][j] = 7 * i;
            }
            else
            {
                array2d[i - 1][j] = 9 * i;
            }
        }
    }

    
    for(int i = 0; i <10; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",array2d[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}