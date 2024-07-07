#include<stdio.h>
int main()
{
    double x1;
    printf("enter x1\n ");
    scanf("%d",&x1);
    double x2;
    printf("enter x2\n ");
    scanf("%d",&x2);
    double x3;
    printf("enter x3\n ");
    scanf("%d",&x3);
    double y1;
    printf("enter y1\n ");
    scanf("%d",&y1);
    double y2;
    printf("enter y2\n ");
    scanf("%d",&y2);
    double y3;
    printf("enter y3\n ");
    scanf("%d",&y3);
    double m1= (y2-y1)/(x2-x1);
    double m2= (y3-y2)/(x3-x2);
    if (m1=m2)
    {
       printf("stright line create");

    }
    else{
        printf(" straight line not created");
    }
 return 0;
}