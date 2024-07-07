#include<stdio.h>
int main()
{
    int a[10] = {2,4,6,8,1,3,5,7,9,0};
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter any element :");
        scanf("%d",&a[i]);
        printf("\n");
         printf("%d ",3*a[i]);
    }
   for (int i = 0; i < 10; i++)
   {
    printf("%d ",a[i]);
   }
   
    return 0;
}