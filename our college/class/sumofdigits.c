// self practice to add digit number in c
#include<stdio.h>
void main()
{
    int n,sum=0,p;
    printf("Enter any number :");
    scanf("%d",&n);
    while (n>0)
    {
        p=n%10;
        sum=sum+p;
        n=n/10;
    }
    printf("The sum of digit is : %d",sum);
}