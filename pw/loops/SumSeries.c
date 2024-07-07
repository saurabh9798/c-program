// print the sum of series 1+2+3+4+5+6......n term
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number :-");
    scanf("%d",&n);
    int sum = 0;
    // 1+2+3+4+5+6+7+8+9+10.......n
    for ( i = 1; i <= n; i++)
    {
    sum =sum+i;
        
    }
    printf("The sum is : %d",sum);

    return 0;
}