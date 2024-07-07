#include<stdio.h>
int main(){
    int a;
    printf(" enter the number : ");
    scanf("%d",&a);
    if (a%5==0 & a%3==0)
    {
     printf("number is divisible by 3 and 5 ");
    }
    else{
        printf(" the number is not divisible by 3 and 5");
    }
    
    return 0;
}