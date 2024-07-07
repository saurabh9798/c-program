//wap in c to input any square matrix after that find sum of both parpandicular digonal element of matrix 
#include <stdio.h>
int main()
{
    int a; // becouse of square matrix row and column are same 
    printf("Enter rows and column are : ");
    scanf("%d",&a);
    int arr[a][a];
    printf("Enter the element of matrix :");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf(" %d", &arr[i][j]);
        }
    }
    printf("all element are :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    int suma,sumb;
    suma=sumb=0;
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i==j)
            {
               suma=suma+arr[i][j]; 
            }
            if (i+j==a-1)
            {
                sumb=sumb+arr[i][j];
            }
            
            
        }
        printf("\n");
    }
printf("\n the diagonal sum is %d ",suma);
printf("\n the diagonal sum is %d ",sumb);
}