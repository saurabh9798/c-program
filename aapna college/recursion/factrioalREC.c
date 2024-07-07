#include<stdio.h>
int fact(int n);
int main()
{
    printf(" factiorial is : %d",fact(6));
    return 0;
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    int factNM1=fact(n-1);
    int factN = factNM1 * n ;   
    return factN;
}