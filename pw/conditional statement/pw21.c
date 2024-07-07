/*
take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
*/
#include<stdio.h>
int main(){
    int a;
    printf(" enter a number : ");
    scanf("%d",&a);
    if (a % 5 == 0 || a % 3 == 0)
    {
       if (a % 15 != 0)
       {
        printf(" ppositive integer which is divisible by 5 or 3 but not divisible by 15");
       }
       
    }
    else{
        printf("invalid number");
    }
  return 0;
}