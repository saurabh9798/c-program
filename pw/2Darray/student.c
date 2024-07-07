// Write a program to store roll number and marks obtained by 4 students side by side in a matrix
#include<stdio.h>
int main()
{
    int r;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int arr[r][3];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}