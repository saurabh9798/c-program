#include<stdio.h>
int main()
{
    int i,sum;
    // printf(" Enter any number : ");
    // scanf("%d",&i);
    for ( i = 5; i <= 50; i++)
    {
        printf("%d\n",i);
     sum=sum+i;

    }
    printf(" Sum of between 5 to 50 : %d", sum);
    

    return 0;
}