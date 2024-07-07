// The power of 2^1 = 2
// The power of 2^2 = 4
// The power of 2^3 = 8
// The power of 2^4 = 16
#include<stdio.h>
int main()
{
    int a,b,power,i;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("Enter any number :");
    scanf("%d",&b);
    power = 1 ;
    for ( i = 1; i <= b; i++)
    {
        power = power * a;
        printf("\nThe power of %d^%d = %d ",a,i,power);
    }
    
    return 0;
}