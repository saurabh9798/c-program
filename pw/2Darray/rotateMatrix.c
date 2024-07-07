#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows/column :");
    scanf("%d", &n);
    printf("Enter all the element\n ");
    int arr[n][n];
    // code for input the value 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // code for transpose 
    // j   >->> i to n-1 or / o to i
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
       printf("\n");
   // code for output 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    //code for rotate the value 
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n-1;
        while (j<k)
        {
             int temp = arr[i][j];
             arr[i][j] = arr[i][k];
             arr[i][k] = temp;
             j++;
             k--;
        }
        
    }
    printf("\n");
   // code for output 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}