// Write a program to print out all armstrong number between 1 to 500 . if sum of cubes of each digits of the number is equal to the number itself , then the number is called an armstrong number . for example ,153=(1*1*1)+(5*5*5)+(3*3*3)
#include<stdio.h>
int main()
{
    int i,sum,temp,r,n;
    temp =n;
    for ( n = 0; n < 500; n++)
    {
   
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    
    }
    printf("armstrong no is ",n);
    
    return 0;
}