#include<stdio.h>
int factorial(int n)
{
    if (n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d ",&n);
    int fact = factorial(n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
} 