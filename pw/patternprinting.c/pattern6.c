//     1
//    121
//   12321
//  1234321
// 123454321
#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        for (int p = 1; p <= m-i; p++)
        {
           printf(" ");
        }
        
        for (int  j = 1; j <= i; j++)
        {
           printf("%d",j);
        }
        for (int k = i-1; k >= 1; k--)
        {
            printf("%d",k);
        }
        
        printf("\n");
    }
    
    return 0;
}