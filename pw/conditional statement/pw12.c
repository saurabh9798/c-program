/*
if cost price and selling price of an item is input through the keyboard , wap to determine whether the seller has made profit or incurred loss.
 also determine how much profit he made or loss he incurred.
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of buy price : ");
    scanf("%d",&a);
    printf("enter the value of sell price : ");
    scanf("%d",&b);
    int c= a-b;
    int d= b-a;
    if (a>b)
    {
      printf("your loss :  %d ",c); 
    }
    else{
        printf("your profit : %d ",d);
    }
    
    return 0;
}