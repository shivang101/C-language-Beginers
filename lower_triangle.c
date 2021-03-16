#include<stdio.h>
int main()
{
    int rows = 4;
    int cols = 4;

    int arr[][4] =  {{10, 20,  30,  40},
                     {50, 60,  70,  80},
                     {90, 100, 110, 120},
                     {130,140, 150, 160},};

    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            if(i<j)
            {
                printf("%d\t", 0);
                
            }
            else
            {
                printf("%d\t", arr[i][j]);
            }
        }
        printf("%\n");
    }
        return 0;
}