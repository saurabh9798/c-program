//wap in to input any number after that print perfact or not 
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter any number : ");
    scanf("%d",&n);
    sum=0;
    for ( i = 1; i <= n/2; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        if (sum==n)
        {
           printf("perfect no");
        }
        else
        {
            printf("Not perfect no ");
        }
    }
    
    return 0;
}