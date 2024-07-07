/*
take positive integer input and tell if it is divisible by 5 or 3
*/
#include<stdio.h>
int main(){
    int a;
    printf(" enter the number : ");
    scanf("%d",&a);
    if (a%5==0 || a%3==0)
    {
     printf("number is divisible by 3 or5 ");
    }
    else{
        printf(" the number is not divisible by 3 or 5");
    }
    
    return 0;
}