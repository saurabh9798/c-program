#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the no a : ");
    scanf("%d",&a);
    printf("enter the no b : ");
    scanf("%d",&b);
    printf("enter the no c : ");
    scanf("%d",&c);
    if (a+b>c & b+c>a & a+c>b)
    {
        printf("they can be side of triangle");
    }
    else{
           printf("they cannot be side of triangle");
    }
    
    return 0;
}