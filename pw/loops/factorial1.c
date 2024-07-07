// Print the factorial of first 'n' numbers
// 1! =1          =1
// 2!=2*1         =2
// 3! =3*2*1      =6
// 4!=4*3*2*1     =24
// 5!=5*4*3*2*1   =120
#include<stdio.h>
int main(){
    int i,n,fact,sum;
    printf(" Enter any number :-");
    scanf("%d",&n);
   
    fact =1;
   
        for ( i = 1; i <= n; i++)
    {
        fact = fact * i;
     printf("\nfactorial of %d is  = %d",i,fact); 
    }
    
      
    
    
    return 0;
}