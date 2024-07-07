//     A
//    AB
//   ABC
//  ABCD
// ABCDE
#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m-i; j++)
        {
            printf(" ");
        }
        for (int k = 65; k < 65+i; k++)
        {
            printf("%c",k);
        }
        printf("\n");
    }
    
    return 0;
}