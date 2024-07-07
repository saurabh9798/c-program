// wap to sum of digit of given number 
#include<stdio.h>
int main()
{
    int n,sum,ld ;
    printf("Enter any number :-");
    scanf("%d",&n);
    sum=0;
    while (n>0)
    {
        ld=n%10;
        sum = sum+ld;
        n=n/10;
    }
    printf("sum = %d",sum);
    return 0;
}