// wap in c to input any number after that find lcm and hcf
#include<stdio.h>
void main()
{
    int a,b,c,hcf;
    printf("Enter three number :");
    scanf("%d %d %d",&a,&b,&c);
    hcf=a<b && a<c ? a:(b <c ? b:c);
    while (a % hcf !=0 || b%hcf !=0 || c%hcf != 0 )
    {
       hcf--;
    }
    printf("HCF = %d",hcf);
}