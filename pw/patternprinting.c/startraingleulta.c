//  ****
//    ***
//     **
//      *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = n; k >=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}   