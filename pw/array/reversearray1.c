//write a program to reverse the array without using any extra array.
#include<stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 2;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        return ;
    }
    
}
int main()
{
    int arr[7] = {7,6,5,4,3,2,1};
    reverse(arr);
    for (int i = 0; i <=6; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}