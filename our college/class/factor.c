//wap in to input any number after that print all factors 
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}