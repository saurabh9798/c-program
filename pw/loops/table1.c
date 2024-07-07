#include<stdio.h>
int main(){
    int x,i;
    printf("enter any number : ");
    scanf("%d",&x);
  for ( i = 0; i <= (x*10); i=i+x)
{
   printf("%d\n ", i );
}
    return 0;
}