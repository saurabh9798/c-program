#include<stdio.h>
int main()
{
    int sa[7];
    for (int i = 0; i < 8; i++)
    {
        printf("Enter %d element :",i);
        scanf("%d",&sa[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("\n%d ",sa[i]);
    }
    
}