// wap to print the transpose of the matrix entered by the user.
#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of column : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter all the element :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf(" %d",arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}