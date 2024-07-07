// if an array arr contains n elements , then check if the given array is a palindrome or not 
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int arr[6]={1,2,3,3,2,1};
//     for (int i = 0; i < 3; i++)
//     {
//         i = arr[i];
//     }
//     for (int i = arr[3]; i > arr[6]; i--)
//     {
//         j = arr[i];
//     }
//     if (i==j)
//     {
//         printf("palindrone no:");
//     }
//     else{
//         printf("not palindrone");
//     }
//     printf(" %d %d ",i,j);
//         return 0;
// }
#include<stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 5;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        // return ;
    }
    if (i==j)
    {
        printf("\npalindrone ");
    }
    else
    {
        printf("\nnot palindrone :");
    }
    
}
int main()
{
    int arr[6] = {1,4,3,3,4,1};
    reverse(arr);
    for (int i = 0; i <=5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}