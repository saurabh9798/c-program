#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of column : ");
    scanf("%d",&c);
    int arr[r] [c];
    // input elements of array
    printf("\n Enter element you want to add in array :  \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf(" %d",&arr[i][j]);
        }
    }
    // output code  to display elements in a 2D array
    printf("\nElements are \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}