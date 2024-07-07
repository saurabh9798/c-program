#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("enter the value of l : ");
    scanf("%d",&l);
    printf("enter the value of b : ");
    scanf("%d",&b);
    a = l*p;
    p = 2*(l+b);
    if (a>p)
    {
        printf("area of rectangle is bigger then area of perimeter  : %d",a);
    }
    else if (a<p)
    {
       printf("area of perimeter is bigger then area of rectangle  : %d ",p);
    }
    else if (a==p)
    {
       printf(" area of perimeter is equal to area of rectangle  : %d ",a);
    }
    else{
        printf(" invalid condition : ");
    }
    
    return 0;
}