//star print reverse in traingle shape 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         printf("*");
    //     }
    //    printf("\n");
    // }
    int a = n;
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
           printf("* ");
        }
       a--;
       printf("\n"); 
    }
    
    return 0;
}