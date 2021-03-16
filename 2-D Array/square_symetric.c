#include <stdio.h>
#include<stdlib.h>
int main()
{   
    int d,flag =0;
    printf("\nEnter the Dimension of the square Matrix\n");
    scanf("%d",&d);

    
    int M1[d][d], M2[d][d];

    printf("Enter the Values Matrix\n");
    for(int i = 0; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }

    printf("The Matrix is \n");
    for(int i = 0; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("%d\t",M1[i][j]);
        }
        printf("\n");
    }
    if(d>=5)
    {
        printf("The Matrix is too big to calculate\n");
        exit(0);
    }
    
    for(int j=0,i =0; j<d; j++,i++)
        {
            for(int k =0; k<d; k++)
            {
                M2[i][k] = M1[k][j];   //M2[i][j]=M2[j][i]
            }
        }
     

    printf("The Transpose of Matrix is \n");
    for(int i = 0; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("%d\t",M2[i][j]);
        }
        printf("\n");
    } 
    printf("\n");

    for(int i = 0; i<d; i++)
    {
        for(int j =0; j<d; j++)
        {
            if(M2[i][j]!=M1[i][j])
            {
                printf("\nThe corresponding values i.e\nM1[%d][%d] are not equal M2[%d][%d]\n", i,j,i,j);
                flag = 1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\n\nthe Matrix is Symmetric\n\n");
    }
    else
    {
        printf("\n\nTry again\n");
    }






    return 0;
}