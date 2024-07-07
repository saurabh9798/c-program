#include<stdio.h>
int main()
{
    int n,count;
    printf("Enter any number :-");
    scanf("%d",&n);
    count =0;
    while (n>0) // n!=0
    {
        n=n/10;
        count=count+1;
    }
    printf("the total value of count :- %d",count );
    
    return 0;
}