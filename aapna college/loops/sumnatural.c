#include<stdio.h>
int main()
{
    int i,n,count;
    printf("Enter a number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
      printf("%d\n",i);
      count=count+ i;

    }
    printf("sum of all number %d",count);
    for ( i = n; i >=1; i--)
    {
        printf("%d \n",i);
    }
    
    return 0;
}