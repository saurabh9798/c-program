#include<stdio.h>
int main()
{
    int x,fact,n;
    printf(" Enter your number : ");
    scanf("%d",&n);
    for ( x = 1; x <=n; x++)
    {
       printf("%d\n",x);
       fact = fact * x ;
    }
    printf("The final factorial is : %d ", fact );
    
    return 0;

}