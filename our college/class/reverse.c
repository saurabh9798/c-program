// self practice to reverse any digit is 
#include<stdio.h>
void main()
{
    int n,rev=0,temp=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    // first methord 
    // while (n>0)
    // {
    //     temp = n%10;
    //     printf("%d",temp);
    //     n= n/10;
    // }
    while (n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("The reverse value  is %d",rev);
}