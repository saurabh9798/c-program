#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    // q=a/b;
    // r=a-(b*q);
    // printf("remander = %d ",r);
    r=a % b;
    printf("remander = %d ",r);
    return 0;
}