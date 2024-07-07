/*
take 4 positive integer input and print the gretest of them
*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the no a : ");
    scanf("%d",&a);
    printf("enter the no b : ");
    scanf("%d",&b);
    printf("enter the no c : ");
    scanf("%d",&c);
    printf("enter the no d : ");
    scanf("%d",&d);
    if (a>b & a>c & a>d)
    {
        printf("the gretest no of : %d",a);
    }
    else if (b>c & b>a & b>d)
    {
      printf("the gretest no of  : %d",b);
    }
    else if (c>b & c>a & c>d)
    {
     printf(" the greatest no of : %d : ",c);
    }
     else if (d>b & d>a & d>c)
    {
     printf(" the greatest no of : %d : ",d);
    }
   return 0;
}