//write a program to add matrices.
#include<stdio.h>
int main()
{
    int p,k,i,j,a,b;
    printf("Enter the size of matrices :");
    scanf("%d  %d",&p,&k);
    int arr[p][k];
    int brr[p][k];
    int rrr[p][k];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("Enter (%d ,%d ) number :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n ");    
    
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < k; j++)
        {
          printf("%d ",arr[i][j]);
        }
        printf("\n ");
       
    }
 printf("\n ");
    for (int a = 0; a < p; a++)
    {
        for (int b = 0; b < k; b++)
        {
            printf("Enter (%d ,%d ) number :",a,b);
            scanf("%d",&brr[a][b]);
        }
        
    }
    printf("\n ");
    
    for (int a = 0; a < p; a++)
    {
        for (int b = 0; b < k; b++)
        {
          printf("%d ",brr[a][b]);
        }
        printf("\n ");
    }
    printf("\n ");
    printf("**********************************");
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < k; j++)
        {
            rrr[i][j] = arr[i][j]+brr[i][j];
        }
        
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf(" %d ",rrr[i][j]);
        }
        printf("\n");
    }
    
    
    // rrr[p][k] = arr[i][j] + brr[a][b];
    // printf("the final result addtition of two matrics %d :",arr[i][j] + brr[a][b]);
    printf("End the code ");
    return 0;
}   