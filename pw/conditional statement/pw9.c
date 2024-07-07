#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a>0 & a % 5==0);
    {
       printf("it is positive number and it is divisible by 5");
    }
    else
    {
        printf("it is not divisible by 5");
    }
    return 0;
}