#include<stdio.h>
int main()
{
    int arr[6] = {1,2,5,3,8,9};
    int mult = 1;
    for (int i = 0; i < 6; i++)
    {
        mult = mult * arr[i];
    }
    printf("The multiply of arrary is :%d",mult);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int arr[5] = {10,31,5,7,5};
//    int mult=1;
//     for (int i = 0; i < 5; i++)
//     {
//        mult=mult *arr[i];
//     }
//     printf(" the value of temp = %d",mult);
//     return 0;
// }