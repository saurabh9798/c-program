// wap in c to input any number after that find lcm and hcf
#include<stdio.h>
void main()
{
    int a,b,c,lcm;
    printf("Enter three number :");
    scanf("%d %d %d",&a,&b,&c);
    lcm=a>b && a>c ? a:(b >c ? b:c);
    while (a % lcm !=0 || b % lcm !=0 || c % lcm != 0 )
    {
       lcm++;
    }
    printf("LCM = %d",lcm);
}
// 
9