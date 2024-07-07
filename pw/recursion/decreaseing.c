#include<stdio.h>
void greeting(int n)
{
    if (n==0) return ;
    printf("Good morning\n");
    greeting(n-1);
    return;
}
void decreaseing_table(int n)
{
    if(n==0) return;
    printf("%d \n",n);
    decreaseing_table(n-1);
}
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    // greeting(n);
    // decreaseing_table(n);
    return 0;
} 
