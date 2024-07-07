// 1234567
// 123 567
// 12   67
// 1     7
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    int nst=n;
    int nsp = 1;
    for (int i = 1; i <= 2*n+1; i++)
    {
        printf("%c",i+64);
    }
    printf("\n");  
    for (int i = 1; i <=n; i++)
    {
      int a=1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c",a+64);
            a++;
        }
        for (int k = 1; k <= nsp ; k++)
        {
            printf(" ");
            a++;
        }
         for (int l = 1; l <= nst; l++)
        {
            printf("%c",a+64);
            a++;
        }
        nsp+=2;
        nst--;
         printf("\n");
    }
}
