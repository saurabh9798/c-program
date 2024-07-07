#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("enter the number : ");
    scanf("%d",&b);
    printf("enter the number : ");
    scanf("%d",&c);
    if (a>b)
    {
      if (a>c)
      {
      printf(" %d  is grater number :",a);
      }
      else{
        printf("%d is greater :  ",c);
      }
    }
    else if(b>a){
       if (b>c)
       {
        printf("%d is grater : ",b);
       }
       else{
        printf("%d is greater :  ",c);
       }
       
      }
      else{
        printf("invalid number");
      }
    return 0;
}