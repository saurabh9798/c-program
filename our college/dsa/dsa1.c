#include<stdio.h>
/*Iterative Function*/
long int sdig(long int m)
{
    long int s=0,d;
    do
    {
        d=m%10;
        s=s+d;
        m=m/10;
    }while(m>0);
    return s;
}
/*Recursive Function*/
long int sdig1(long int m)
{
    static long int s,d;
    if(m>0)
    {
        d=m%10;
        s=s+d;
        sdig1(m/10);
    }
    return s;
}
void main()
{
    long int k;
    printf("\n Enter any number:");
    scanf("%ld",&k);
    printf("\nSum of the digit=%ld",sdig(k));
    printf("\nSum of the digit=%ld",sdig1(k));
}