#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int  i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j==m/2+1 || i==m/2+1)
            {
               printf("*"); 
            }
            else
            {
                printf(" ");
            }
            
        }
        printf(" \n");
    }
    
    return 0;
}