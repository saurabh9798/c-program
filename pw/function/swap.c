// wap to swap the number with the using a third variable temp 
#include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter a :");
//     scanf("%d",&a);
//     printf("Enter b :");
//     scanf("%d",&b);
//     int temp = a;
//     a=b;
//     b=temp;
//     printf("the nummber is : %d %d",a,b);
//     return 0;
// }
// wap to swap the number with the using only two variable without using third variable 
int main()
{
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the nummber is : %d %d",a,b);
    return 0;
}