// Find out the maximum element and minimum element in a 2d array 
#include<stdio.h>
int main()
{
    int arr[4][3] = {11,21,33,41,15,6,7,18,99,0,11,-12};
    int max = arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            
        }
        printf("\n");
    }
    
    int min = arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            
        }
        printf("\n");
    }
    printf("The maximum value is : %d",max);
    printf("\n");
    printf("The minimum value is : %d",min);
    return 0;
}