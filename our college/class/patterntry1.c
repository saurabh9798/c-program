// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
#include<stdio.h>
void main()
{
    int i,j, a,b;
    printf("Enter any number :");
    scanf("%d",&a);

    for ( i = a; i > 1; i--)
    {
        for ( j = 1; j <i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}