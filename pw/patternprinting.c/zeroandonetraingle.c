// 1
// 01
// 101
// 0101
// methord 1
// #include<stdio.h>
// int main()
// {
//     int m;
//     printf("Enter any number :");
//     scanf("%d",&m);
//     int a;
//     for (int i = 1; i <= m; i++)
//     {
//         if (i%2!=0) a = 1;
//         else a = 0;
//         for (int j = 1; j <= i; j++) 
//        { printf("%d",a);
//         if (a==0) a=1;
//         else a=0;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// second methord
#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        if ((i+j)%2==0)
            printf("1");
        else printf("0");
        
       }
       printf("\n");
    }
    return 0;
}