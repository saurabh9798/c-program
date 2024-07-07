// Find the sum of a given matrix of n*m.
#include<stdio.h>
int main()
{
    int r,c,sum;
    sum= 0;
    printf("Enter the rows and column of matrix :");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter all the element :");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
          sum = sum +arr[i][j];
        }
        printf("\n");
    }
    printf("the final sum of matrix is : %d",sum);
    return 0; 
}