//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
// ABCDEFEDCBA
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
        for (int k = 65; k <= 65+i; k++)
        {
            printf("%c",k);
        }
        for (int l=64+i ; l>=65 ;l--)
        {
            printf("%c",l);
        }
        
        printf("\n");
    }
    
    return 0;
}
