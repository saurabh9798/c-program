#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m-i; j++)
        {
            printf(" ");
           
        } 
        for (int k = 1; k <= 2*i-1; k++)
        {
           printf("%d",k);
          
        }
        printf("\n");
        
    }
    
    return 0;
}