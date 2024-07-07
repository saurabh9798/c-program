#include <stdio.h>
int main()
{

    int a;
    printf("Enter no of rows in the matrix : ");
    scanf("%d", &a);
    int b;
    printf("Enter no of column in the matrix : ");
    scanf("%d", &b);
    int arr[a][b];
    printf("Enter the all element are \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf(" the all  elements are : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter the all sprial element are \n");
    // spiral print
    int minr = 0;
    int maxr = a - 1;
    int minc = 0;
    int maxc = b - 1;
    int tne = a * b;
    int count = 0;
    while (count < tne)
    {
        // print the minimum row
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        // print the minimum column
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
        // print the minimum column
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}
