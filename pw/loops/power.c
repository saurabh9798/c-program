// Two number are entered through the keyboard. WAP to find the value of one number to the raised to the power of another .
#include<stdio.h>
int main()
{
    int a,b,i,power;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("Enter any number :");
    scanf("%d",&b);
    power = 1;
    for ( i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("The power of %d ^ %d  = %d",a,b,power);
    return 0;
}