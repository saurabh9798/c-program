//wap in c to input two number after that check twin prime or not 
#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        for (int j = 2; i <n/2 ; j++)
        {
           flag=1; 
        }
      
    }
    if (flag==1)
    {
        printf("prime no");
    }
    else
    {
        printf("not prime");
    }
   return 0;
}