#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,max;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (int i=1; i<=max;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(arr[j]>=max+1-i)
                        {
                            printf("%d ",i-(max-arr[j]));
                        }
                    else
                        {
                            printf("  ");
                        }
                }
        printf("\n");
    }
    return 0;
}