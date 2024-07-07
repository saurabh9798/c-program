// wap to print the sum of given number and its reverse.
#include<stdio.h>
int main()
{
    int n,r,ok;
    printf("Enter any number :-");
    scanf("%d",&n);
    ok=n;
    r=0; 
    
    while (n>0)
    {
        
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
   
    printf(" Reverse no is :- %d",r);
    printf(" \nsum of reverse :-%d",r+ok);
    return 0;
}