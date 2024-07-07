#include<stdio.h>
int main()
{
    int a;
    printf("Enter no of rows in the matrix : ");
    scanf("%d",&a);
    int b;
    printf("Enter no of column in the matrix : ");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the all element are \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
       printf(" the all  elements are : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}