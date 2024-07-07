#include<stdio.h>
int main()
{
    int i, n,ecount,ocount;
    printf("Enter any number : ");
    scanf("%d",&n);
    ecount=0;
    ocount=0;
    for (i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            if (i % 2==0)
            {
             ecount++;            
            }
            else
            {
                ocount++;
            }
            
        }
    
    }
    printf("%d,%d",ecount,ocount);
    return 0;
}