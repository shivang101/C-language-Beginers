#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int a,b,c,d;
    printf("\nEnter the Number of rows and columns in Matrix 1\n");
    scanf("%d %d",&a,&b);

    printf("\nEnter the Number of rows and columns in Matrix 2\n");
    scanf("%d %d",&c,&d);

    if(b!=c)
    {
        printf("\nThese matrixs cannot be multipled as the columns of first matrix is not equal to rows of second matrix\n\n");
        exit(1);
    }

    int M1[a][b];
    printf("\n First Matrix values\n\n");
    for(int i =0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }

    
    int M2[c][d];
    printf("\n Second Matrix values\n");
    for(int i =0; i<c; i++)
    {
        for(int j = 0; j<d; j++)
        {
            scanf("%d",&M2[i][j]);
        }
    }
    
    printf("\n First Matrix is\n\n");
    for(int i = 0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }

    printf("\n Second Matrix is\n\n");
    for(int i = 0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }

    int M3[a][d];
    for(int i = 0; i<a; i++)
    {
        for(int j =0; j<d; j++)
        {   
            int sum = 0;
            for(int k=0; k<b; k++)
            sum = sum + M1[i][k]*M2[k][j];
            M3[i][j] = sum;
        }
    }

    printf("\n Multiplication of both MATRIX IS\n\n");

    for(int i = 0; i<a; i++)
    {
        for(int j=0; j<d; j++)
        {
            printf("%d ",M3[i][j]);
        }
        printf("\n");
    }





}