//1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 ............. n term 
#include<stdio.h>
int main(){
     int n;
    printf(" Enter any number :- ");
    scanf("%d",&n);
   
    int sum = 0;
    if (n % 2 == 0)
    {
        sum = -n/2;
    }
    else
    {
        sum = -n/2 +n;
    }
    printf("The sum is : %d",sum);
    return 0;
}