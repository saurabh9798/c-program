//     A
//    ABA
//   ABCAB
//  ABCDABC
// ABCDEABCD
#include<stdio.h>
int main()
{
    int m,nsd,nst;
    printf("Enter any number :");
    scanf("%d",&m);
  for (int i = 1; i <= m; i++)
  {
    int a=i-1;
    for (int j = 1; j <= m-i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <= i; k++)
    {
        printf("%c",k+64);
    }
    for (int l = 1; l <= i-1; l++)
    {
        printf("%c",l+64);
    }
    
    printf("\n");
  }
    return 0;
}
