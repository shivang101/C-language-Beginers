#include <stdio.h>
int main()
{
    int rows = 4;
    int cols = 5;

    int arr[][5] =  {{1,  2,  3,  4,  5},
                     {6,  7,  8,  9,  10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},};

    for(int j = 0; j<cols; j++)
    {
        for(int i = 0; i< rows; i++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}