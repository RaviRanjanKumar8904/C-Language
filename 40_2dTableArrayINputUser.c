#include <stdio.h>

int main()
{
    int array2d[10][3];
    int table[3];

    for(int t = 0; t < 3; t++)
    {
        printf("Enter table number %d:: ",t+1);
        scanf("%d",&table[t]);
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                array2d[i - 1][j] = table[0] * i;
            }
            else if (j == 1)
            {
                array2d[i - 1][j] = table[1] * i;
            }
            else
            {
                array2d[i - 1][j] = table[2] * i;
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