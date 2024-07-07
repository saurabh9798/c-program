#include<stdio.h>
int sum(int n);
int main()
{
    printf("sum is : %d ",sum(5));
    return 0;
}
// resursive function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    int sumNM1 = sum(n-1); // sum of 1 to n
    int sumN = sumNM1 + n;
    return sumN;
}
 