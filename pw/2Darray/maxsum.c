// wap to print the row number having the maximum sum in a given matrix.
#include<stdio.h>
int main()
{
    int r;
    int maxsum = 0;
    int arr[3][4] = {1,2,3,1,0,5,2,2,4,0,0,3};
    for (int i = 0; i < 1; i++)
    {
         int sum = 0;
        for (int j = 0; j < 4; j++)
        {
              maxsum = maxsum + arr[i][j];
            r = i;
        }
        printf("\n");
    }
    for (int i = 1; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
            if (maxsum<sum)
            {
                maxsum=sum;
                  r = i;
            }
            
        }
        printf("\n");
    }
    for (int i = 2; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
             if (maxsum<sum)
            {
                maxsum=sum;
                printf("the row inex is : %d ",i);
                  r = i;
            }
        }
        printf("\n");
    }
    printf("The maximum  sum is : %d\n",maxsum);
    printf("The row index is : %d",r);
    return 0;
}