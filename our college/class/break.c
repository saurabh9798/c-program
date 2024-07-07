// wap to input any number after that print binary or not 
#include<stdio.h>
void main()
{
    int n,d,flag=0;
    printf("Enter any number for chacking binary number :");
    scanf("%d",&n);
    flag=0;
    while (n>0)
    {
        d=n%10;
       if (d==0||d==1)
            {
                n=n/10;
            }
        else{
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("binary number");
    }
    else{
        printf("not binary");
    }
}
//wap in c to print a series of odd natural number useing continue keybord 