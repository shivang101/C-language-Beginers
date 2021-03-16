#include <stdio.h>
int main()
{
    int rows = 4;
    int cols = 5;

    int arr[][5] =  {{10,20,30,40,50},
                    {60,70,80,90,100},
                    {110,120,130,140,150},
                    {160,170,180,190,200},};

    for(int j = 0; j<cols; j++)
    {
        if(j%2==0)
        {
            
            for(int i =0; i<rows; i++)
            {
                printf("%d\t",arr[i][j]);
            }
        }
        else
        {
             for(int i = rows-1; i>=0; i--)
            {
                printf("%d\t",arr[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}