#include<stdio.h>
// int main(){
//     int a;
//     printf(" enter a number : ");
//     scanf("%d",&a);
//     if (a % 5 == 0)
//     {
//        if (a % 5 == 0);
//        {
//         printf("it is divisible by 5 and 3");
//        }
       
//     }
//     else{
//         printf("invalid number");
//     }
//   return 0;
// }
#include<stdio.h>
int main(){
    int a;
    printf(" enter a number : ");
    scanf("%d",&a);
    if (a % 5 == 0 & a % 3 == 0)
    {
     printf("it is divisible by 5 and 3");  
    }
    else{
        printf("invalid number");
    }
  return 0;
}