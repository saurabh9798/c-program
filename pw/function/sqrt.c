#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter any number :");
    scanf("%d %d",&m,&n);

    // int root = sqrt(m);
    // printf("The sqare root is : %d",root);
    int q= pow(m,n);
    printf("%d",q);
    return 0;
} 