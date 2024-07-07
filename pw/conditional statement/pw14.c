#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if (a>99 && a<1000)
    {
       printf("the positive and three digit integer is : ");
    }
    else{
        printf("not three digit integer");
    }
    return 0;
}