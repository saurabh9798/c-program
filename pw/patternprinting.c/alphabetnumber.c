#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    if (m % 2 == 0)
    {
        for (int  i = 1; i <= m; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            printf(" %c",j+64);
        }
        printf("\n");
    } 
    }
    else
    
    {
  for (int  i = 1; i <= m; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    
    }
    
   
    
    return 0;
}