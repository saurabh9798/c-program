#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
  
    for (int i = 1; i <= n; i=i*2)
    {
       printf("%d ",i);
     
     
    }
    
    return 0;
}