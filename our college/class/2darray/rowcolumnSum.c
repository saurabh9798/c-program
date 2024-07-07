// wap in c to input any matrix after find sum of all element for each row and each column
#include <stdio.h>
int main()
{
    int row1, row2, row3, colum1, column2, column3;
    row1 = row2 = row3 = colum1 = column2 = column3 = 0;
    int a[3][3];
    int top, bottom, left, right;
    top = bottom = left = right = 0;
    printf("Enter the element of matrix :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }
    printf("all element are :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                row1 = row1 + a[i][j];
            }
            if (i == 1)
            {
                row2 = row2 + a[i][j];
            }
            if (i == 2)
            {
                row3 = row3 + a[i][j];
            }
            if (j == 0)
            {
                colum1 = colum1 + a[i][j];
            }
            if (j == 1)
            {
                column2 = column2 + a[i][j];
            }
            if (j == 2)
            {
                column3 = column3 + a[i][j];
            }
        }
        printf("\n");
    }
    printf("\nthe row1 sum is : %d", row1);
    printf("\nthe row2 sum is : %d", row2);
    printf("\nthe row3 sum is : %d", row3);
    printf("\nthe column1 sum is : %d", colum1);
    printf("\nthe column2 sum is : %d", column2);
    printf("\nthe column3 sum is : %d", column3);
}