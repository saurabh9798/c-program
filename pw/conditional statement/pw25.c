/*Function Based Program*/
#include<stdio.h>
int n,f,i;
//No arg, No return/
void f1()
{
	printf("\n Enter any number:");
	scanf("%d",&n);
	if(n<0)
	printf("\n No factorial for negative value.");
	else if(n==0)
	printf("\n Factorial of 0 is 1.");
	else
	{
		f=1;
		for(i=1;i<=n;i++)
		{
		f=f*i;	
		}
	}
	printf("\n Factorial of %d is %d",n,f);
}