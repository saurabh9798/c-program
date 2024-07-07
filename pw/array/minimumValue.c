#include<stdio.h>
int main()
{
    int arr[6] = {5,41,8,7,5,20}; 
    int min = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("the minimum value is : %d",min);
    return 0;
}