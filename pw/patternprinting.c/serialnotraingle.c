#include<stdio.h>
int main()
{
    int m,a;
   a=1;
    printf("Enter any number : ");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        
        for (int j=1; j <= i; j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}