// ***********
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    int nsp= 1;
    int nst=n;
    for (int i = 1; i <= 2*n+1; i++)
    {
        printf("*");
    }
    printf("\n");             
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp ; k++)
        {
            printf(" ");
        }
         for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }
        nsp+=2;
        nst--;
         printf("\n");
    }
   

    return 0;
}