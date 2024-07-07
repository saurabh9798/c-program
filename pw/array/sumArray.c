#include<stdio.h>
int main()
{
    int arr[5] = {10,31,5,7,5};
   int sum=0;
    for (int i = 0; i < 5; i++)
    {
       sum=sum +arr[i];
    }
    printf(" the value of temp = %d",sum);
    return 0;
}