#include<stdio.h>
void increse(int n,int key)
{
    if (key<n) return;
    printf("%d \n",n);
    increse(n+1,key);
}
int main()
{
    int key;
    int n = 1;
    printf("Enter any number :");
    scanf("%d",&key);
    increse(n,key);
    return 0;
}