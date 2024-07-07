/*
dispay this gp - 3, 12, 48, ... up to n term .
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int a= 3;
    for (int i = 1; i <= n; i++)
    {
       printf("%d ",a);
       a=a*4;
    }
    
    return 0;
}