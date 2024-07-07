#include<stdio.h>
int main()
{
    //1st matrix orders
    int m;
    printf("Enter no of rows of 1st matrix :");
    scanf("%d",&m);
    int n;
    printf("Enter no of of column 2nd matrix :");
    scanf("%d",&n);
    
    int a[m][n];
    printf("\nEnter element of 1st matrix :");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    // 2nd matrix order
    int p;
    printf("Enter no of  1st rows matrix :");
    scanf("%d",&p);
    int q;
    printf("Enter no of 2nd column matrix :");
    scanf("%d",&q);
        int b[p][q];
    printf("\nEnter element of 2nd matrix :");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        { 
            scanf("%d",&b[i][j]);
        }
        
    }
    //check 
    if (n!=p)
    {
         printf("\n The matrix cannot be multiplied");
    }
    else
    {
        // multiplication 
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j]= 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] = res[i][j]+a[i][k]*b[k][j];
                }
            }
            
        }
        printf("the resultant matrix is : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
          
    }
    
    return 0;
}