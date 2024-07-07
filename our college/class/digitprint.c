// wap in c to input any number after that print every digit in word
#include<stdio.h>
int main()
{
    int n,d,rev;
    printf("Enter any number :");
    scanf("%d",&n);
    for (rev=0;n>0;d=n%10,rev=rev*10+d,n=n/10);
    while (rev>0)
    {
        d=rev%10;
        switch (d)
        {
        case 0;
        printf("Zero");
        break;
        case 1;
        case 2;
        case 3;
        case 4;
        case 5;
        case 6;
        case 7;
        case 8;
        case 9;

        }
    }
    
    
    return 0;
}