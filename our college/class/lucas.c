#include<stdio.h>
void main()
{
 int a=1,b=1,c=1,d,i;
 printf("The series of lucas upto 20 terms \n");
 printf("%d\n %d\n %d\n ",a,b,c);
 for ( i = 4; i <=20; i++)
 {
    d=a+b+c;
    a=b;
    b=c;
    c=d;
    printf("%d\n",d);
 }
 
}
// wap in  c to input any number after that check number is strong or not according to users choice 