// here we know how to search any particular element from the whole array 
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    bool flag = false;
    int btx = 0;
    for (int  i = 0; i <= 6; i++)
    {
        if (arr[i]==x)
        {
            // printf("%d is present is int the array and its index is %d",x,i);
            flag = true;
            btx = i;
            break;
        }
        
        
    }
    if (flag == true)
        {
           printf("%d is present is the array in the index of %d ",x,btx);
        }
        else
        {
            printf("%d is not present in the array",x);
        }
    return 0;
}