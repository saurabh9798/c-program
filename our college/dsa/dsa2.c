//Function Based Program
#include<stdio.h>
int n,f,i;
/*No arg, No return*/
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
/*No arg, but return*/
int f2()
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
		return f;
	}
	
}
/* arg, but no return*/
void f3(int m)
{
	if(m<0)
	printf("\n No factorial for negative value.");
	else if(m==0)
	printf("\n Factorial of 0 is 1.");
	else
	{
		f=1;
		for(i=1;i<=m;i++)
		{
		f=f*i;	
		}
		printf("\n Factorial of %d is %d",m,f);
	}
}
/* arg, as well as return*/
int f4(int m)
{
	if(m<0)
	printf("\n No factorial for negative value.");
	else if(m==0)
	printf("\n Factorial of 0 is 1.");
	else
	{
		f=1;
		for(i=1;i<=m;i++)
		{
		f=f*i;	
		}
		return f;
	}
}
void main()
{
	f1();
	printf("\n Factorial=%d",f2());
	printf("\n Enter any number:");
	scanf("%d",&n);
	f3(n);
	printf("\n Enter any number:");
	scanf("%d",&n);
	printf("\n Factorial=%d",f4(n));
}