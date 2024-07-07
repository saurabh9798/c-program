//wap to print reverse of a given
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter any number :-");
    scanf("%d",&n);
     r=0;
    while (n>0)
    {
    r=r*10; 
    r=r+(n%10);
    n=n/10;
    }
        // r=r/10;
    printf("the reverse no is  = %d",r);

    return 0;
}