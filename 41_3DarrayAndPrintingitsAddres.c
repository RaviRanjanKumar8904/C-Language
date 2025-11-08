#include<stdio.h>

int main()
{
    int array3d[5][5][5];
    

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            for(int k = 0; k < 5; k++)
            {
                // int* pointer = array3d[i][j][k];
                printf("\nAddress of [%d][%d][%d] = %u",i,j,k,&array3d[i][j][k]) ;           
            }
        }
    }

    return 0;
}