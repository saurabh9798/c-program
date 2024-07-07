// wap to print the factorial of a given number 'n'
// 5! = 5*4*3*2*1
#include<stdio.h>
int main()
{
    int i, n,fact;
    printf("Enter any number :");
    scanf("%d",&n);
    fact=1;
    //first method 
    // for (i = n; i >= 1; i--)
    // {
    //  printf(" %d\n",i); 
    //  fact = fact *i ;
    // }
   // second method 
   for ( i = 1; i <= n; i++)
   {
     fact=fact*i;
   }
    printf("print the value of factorial:- %d",fact);
    
    return 0;
} 