// wap in  c to input any number after that check number is strong or not according to users choice  145
#include<stdio.h>
void main()
{
    int n,num,d,fact,i,sum=0;
    char choice;
    do
    {
        printf("Enter any number ");
        scanf("%d",&n);
        num=n;
     } while (n>0)
   {
   for(i=1,fact=1;i<=d;fact=fact*i,i++);
    sum=sum+fact;
    n=n/10;
    if (sum==num)
    
        printf("strong number");
    else
    printf("not strong no");
    printf("do you want to contiinue this operation? press [y/n]");
    while(choice=='y' || choice =="y");
    
   }
}
// wap in c to print the series of prime no up to 100