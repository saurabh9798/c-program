// *
// **
// ***
// ****
// *****

#include<stdio.h>
void main()
{
    int i,j, a,b;
    printf("Enter any number :");
    scanf("%d",&b);
    for ( i = 0; i <= b; i++)
    {
        for ( j = 0; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}