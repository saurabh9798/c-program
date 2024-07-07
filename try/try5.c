#include<stdio.h>
int main()
{
    int m;
    printf("Enter any number :");
    scanf("%d",&m);
    for (int i = 1; i <= 2*m-1; i=i+2)
    {
        for (int i = m-1; i >= 1; i--)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}