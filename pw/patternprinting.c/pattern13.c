// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    int min = 0;
    for (int i = 1; i <= 2*m-1; i++)
    {
       for (int j = 1; j <= 2*m-1; j++)
       {
         int a=i;
         if (i>m) a=2*m-i;
         int b=j;
         if (b>m) b=2*m-j;
         if (a<b) min=a;
         else min =b;
         printf("%d",m+1-min);
       }
       printf("\n");
    }
    
    return 0;
}