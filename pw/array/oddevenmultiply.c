// Given an array of integers, change the value of all odd indexed element to its second multile and increment al even indexed vlue by 10.
#include<stdio.h>
int main()
{
    int arr[7] ={1,2,3,4,5,6,7};
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ",2*arr[i]);
            // arr[i] = 2*arr[i]
        }
        else
        {
            printf("%d ",arr[i]+10);
            // arr[i] = 10+arr[i]
        }
    }
    
    return 0;
}