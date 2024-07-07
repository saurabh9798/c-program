// wap to intput five matrix after that print all matrixieces 
#include<stdio.h>
int main()
{
    int a[5][3][2],i,j,k;
    printf("Enter five matrix ");
    for (int i = 0; i < 5; i++) // no of matrix 
    {
        printf("Enter value of matrix of %d\n ",i+1);
        for (int j = 0; j < 3; j++) //row
        {
            for (int k = 0; k < 2; k++)//column
            {
                scanf("%d",&a[i][j][k]);
            }
            
        }
        
    }
    printf("all matrix are \n");
        for (int i = 0; i < 5; i++) // no of matrix 
    {
        printf("Enter value of matrix of %d\n ",i+1);
        for (int j = 0; j < 3; j++) //row
        {
            for (int k = 0; k < 2; k++)//column
            {
                printf("%d\t",a[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
