//  Print the nth fibonacci number 
// fibonacci =  1 1  2   3  5 8 13 21 34 55 89
#include<stdio.h>
int main()
{
    int i,n,fib,a,b,sum;
    a=1;
    b=1;

    printf("Enter any number :");
    scanf("%d",&n);
    for ( i = 1; i <= n-2; i++)
    {
      sum=a+b;
      a=b;
      b=sum;  
    }
    printf("The fibonacci is %dth is sum = %d",n,sum);
    
    return 0;
}  