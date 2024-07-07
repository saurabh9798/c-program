// wap in c to print the series of prime no up to 100
#include<stdio.h>
void main()
{
    int i,j,count=0,fact;
    printf("Enter the series of prime no up to 100");
    for (int i = 1; i <= 100; i++)
    {
        for ( j = 1; i <= i ; j++)
        {
            if (i%j==0)
            {
                count++;
            }
          if (count=2)
          {
            printf("%d\n",i);
          }
            count=0;
        }
        
        
    }
    
}