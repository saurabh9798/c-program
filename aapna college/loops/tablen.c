#include<stdio.h>
int main()
{
    // int i,n;
    // printf("Enter any number : ");
    // scanf(" %d",&n);
    // for ( i = 1; i<=10;i++)
    // {
    //   printf(" %d \n",i*n);
    // }
     int i,n,sum;
    printf("Enter any number : ");
    scanf(" %d",&n);
    for ( i = n; i<=(10*n);i=i+n)
    {  
      printf(" %d \n",i);
      sum= sum+i;
    }
    printf("your all %d table sum is : ",sum);
    return 0;
}