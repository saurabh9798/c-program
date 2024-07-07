// wap to print sum of all odd digit of  a given number.
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
       if (ld % 2 != 0)
       sum = sum+ld;
       n=n/10;
    }
    printf("sum = %d",sum);
    return 0;
}