// Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).
#include<stdio.h>
int main()
{
    int sum =0;
    int arr[3][4] ={ 1,2,4,5,7,8,3,6,9,10,11,12};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("the sum of matrices :%d",sum);
    return 0;
}