#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        int a=1;
        for (int j = 1; j <= m; j++)
        {
            printf(" %c",a+64);
            a++; 
        }
        printf(" \n");
    }
    return 0;
}  