/*
take 3 positive integer input and print the gretest of them
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the no a : ");
    scanf("%d",&a);
    printf("enter the no b : ");
    scanf("%d",&b);
    printf("enter the no c : ");
    scanf("%d",&c);
    if (a>b & a>c)
    {
        printf("the gretest no of : %d",a);
    }
    else if (b>c & b>a)
    {
      printf("the gretest no of  : %d",b);
    }
    else if (c>b & c>a)
    {
     printf(" the greatest no of : %d : ",c);
    }
   return 0;
}