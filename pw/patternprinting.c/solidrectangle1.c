#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter any number : ");
    scanf("%d %d",&m,&n);
    for (i = 1; i <= m; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf(" *"); 
        }
        
       printf("\n");
    }
    
    return 0;
}  