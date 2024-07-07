// wap in c to check armstrong no or not 
#include<stdio.h>
int main()
{
    int n,r,sum = 0,temp;
    printf("Enter any number : ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp == sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;
}