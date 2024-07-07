// fibonacci =  1 1  2   3  5 8 13 21 34 55 89
// Print first 'n' fibonacci numbers.
// output screen be like 
// The 1st fibonacci number is 1
// the 2nd fibonacci number is 2
// the 3rd fibonacci number is 3
// the 4th fibonacci number is 4
// the 5th fibonacci number is 5
#include<stdio.h>
int main()
{
    int i,n,sum,a,b;
    printf("Enter any number : ");
    scanf("%d",&n);
    a=1;
    b=1;
    for ( i = 1; i <= n-2; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
      printf("\nThe %d th fibonacci number is : %d",i+2,sum);  
    }

    
    return 0;
}