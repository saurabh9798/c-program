#include<stdio.h>
int main()
{
    int arr[7]={111,8,54,75,56,125};
    int max = arr[0];
    for (int i = 0; i < 7; i++)
    {
    if (max<arr[i])
     max = arr[i];
    }
    
   printf("the maximum value is :%d",max);
    
}