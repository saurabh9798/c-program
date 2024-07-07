// print the sum of series 1-2+3-4+5-6+......n term
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    int sum = 0;
    // 1-2+3-4+5-6+......n term
    // odd number -> add
    // even number -> subtrct
    // first method  
    // for ( i = 1; i <= n; i++)
    // {
    //   if (i % 2 != 0) sum=sum+i;
    //   else sum = sum - i;
    // }
    // second method 
    if (n%2==0)
    {
      sum=-n/2+n;
    }
    else{
      sum=-n/2+n;
    }
    
    printf("The sum is : %d",sum);

    return 0;
}