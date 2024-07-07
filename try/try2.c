#include<stdio.h>
int main(){
    int m,temp=0;
printf("Enter any number :");
scanf("%d",&m);
for (int i = 2; i <= m/2; i++)
{
    if (m%i==0)
    {
       temp=0;
    }
    else
    {
      temp=1;
    }
    
}
if (temp==1)
{
    printf("prime no");
}
else
{
    printf("not prime");
}

 return 0; 
}