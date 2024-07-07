#include<stdio.h>
int main()
{
    int n;
    printf("Enter any  number :");
    scanf("%d",&n);
    int count ;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
           count = 0;
        }
    
    }
    if (count == 0)
    {
         printf("the number is not  prime ");
    }
    else 
    {
      printf("the number is prime ");
    }
    return 0;
}