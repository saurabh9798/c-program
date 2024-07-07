#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[6] ={1,12,3,4,5,6};
    int max = INT_MIN ;
    int smax = INT_MIN ;
    for (int i = 0; i < 6; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
      for (int i = 0; i < 6; i++)
    {
        if (arr[i]!=max  && smax<arr[i])
        {
            smax=arr[i];
        }
        
    }
    printf("the maximum number is :%d",smax);
    return 0;
}