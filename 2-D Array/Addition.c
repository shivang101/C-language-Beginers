#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int a,b,c,d;

    printf("\nEnter the Number of rows and columns in Matrix 1\n");
    scanf("%d %d",&a,&b);
    printf("\nEnter the Number of rows and columns in Matrix 2\n");
    scanf("%d %d",&c,&d);

    if(!(a==c&&b==d))
    {
        printf("The dimensions of the Matrix are not the same therfore they cannot be added\n");
        exit(1);
    }
    int M1[a][b];
    
    int i, j;
    printf("Enter the first Matrix\n");
    for(i = 0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&M1[i][j]);
        }
    } 

    printf("Enter the Second Matrix\n");
    int M2[c][d];
    for(i = 0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&M2[i][j]);
        }
    }
    printf("\n First Matrix is\n\n");
    for(i = 0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("[%d][%d] = %d ",i,j,M1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Second Matrix is\n\n");
    for(i = 0; i<c; i++)
    {
        for(j=0; j<d; j++)
        {
            printf("[%d][%d] = %d ",i,j,M2[i][j]);
        }
        printf("\n");
    }

    printf("\n The SUM OF THE MATRIXS ARE\n\n");
    int s[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0; j<b;j++)
        {
            printf("[%d][%d] = %d ",i,j,(M1[i][j]+M2[i][j]));
        }
        printf("\n");    
    } 
    
}

