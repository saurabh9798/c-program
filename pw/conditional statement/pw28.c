#include<stdio.h>
int main(){
    int x,y;
    printf(" enter a x");
    scanf("%d",&x);
// if (x%2==0)
// {
//    printf("even number");
// }
// else
// {
//  printf("odd number");
// }
// if (x%2==0)
// printf("even number");
// else
// printf("odd number");
x%2==0 ? printf("even number") :  printf("odd number");
return 0;
}