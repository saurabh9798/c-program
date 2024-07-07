#include<stdio.h>
int main()
{
    int i,n,count;
    printf("Enter any number :");
    scanf("%d",&n);
    count=0;
    for ( i = 1; i <= n; i++)
    {
        if (n % i==0)
        {
           count=2;
           
        }
        
    }
    if (count==1)
    {
        printf(" not prime no");
    }
    else if(count==0)
    {
        printf("prime ");
    }
    
    return 0;
}