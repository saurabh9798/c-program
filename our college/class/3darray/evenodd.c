// wap  in c to input five matrix after that count even and odd element for each matrix 
#include<stdio.h>
int main()
{
    int a[5][3][2],i,j,k,ecount,ocount;
    printf("Enter five matrix ");
    for (int i = 0; i < 5; i++) // no of matrix 
    {
        printf("Enter value of matrix of %d\n ",i+1);
        for (int j = 0; j < 3; j++) //row
        {
            for (int k = 0; k < 2; k++)//column
            {
                scanf("%d",&a[i][j][k]);
            }
            
        }
        
    }
    printf("all matrix are \n");
        for (int i = 0; i < 5; i++) // no of matrix 
    {
        ecount= ocount =0;
        printf("Enter value of matrix of %d\n ",i+1);
        for (int j = 0; j < 3; j++) //row
        {
            for (int k = 0; k < 2; k++)//column
            {
                printf("%d\t",a[i][j][k]);
                if (a[i][j][k]%2==0)
                {
                    ecount++;
                }
                else
                {
                    ocount++;
                }
                
            }
            printf("\n");
        }
    }
printf("total even element is %d\n",ecount);
printf("total odd element is %d",ocount);
    return 0;
}
