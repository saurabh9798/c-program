//wap in c to input any square matrix after that find sum of both parpandicular digonal element of matrix 
#include <stdio.h>
int main()
{
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
    printf("all element are :");
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
            if (i==0)
            {
                top=top+a[i][j];
            }
            if (i==2)
            {
                bottom=bottom+a[i][j];
            }
            if (j==0)
            {
                left=left+a[i][j];
            }
            if (j==2)
            {
                right=right+a[i][j];
            }
        }
        printf("\n");
    }
    printf("value of top %d\n", top);
    printf("value of bottom %d\n", bottom);
    printf("value of left %d\n", left);
    printf("value of right %d\n", right);
    return 0;
}
// i==j i+j=4
// wap in c to input any matrix after find sum of all element for each row and each column
// wap in c to input any square matrix after that find sum of lower and upper element 
// wap in c to input any matrix after that check matrix is either symmetric or not 