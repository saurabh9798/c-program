#include<stdio.h>
int main(){
  int n,flag=0;
  printf("Enter any number :");
  scanf("%d",&n);
  for (int i = 1; i <n/2; ++i)
  {
    if (n%i==0)
    {
       flag=1;
       break;
    } 
  }
  if (flag=0)
  {
    printf("prime no");
  }
  else
  {
    printf("not prime");
  }
  return 0;
}