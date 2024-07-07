/*Array implementation of Stack*/
/* Global Declaration*/
#include<stdio.h>
#include<stdlib.h>
#define M 5
int stack[M];
int top=-1;
void push()
{
	int item;
	if(top==M-1)
	{
		printf("\n Stack is full.");
	}
	else
	{
		/*top=top+1;*/
		printf("\n Enter item for insertion:\n");
		scanf("%d",&item);
		stack[++top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n Stack is Empty.");
	}
	else
	{
		printf("\n Popped Element is %d",stack[top--]);
	}
}
void peep()
{
	int i;
	if(top==-1)
	{
		printf("\n Stack is Empty.");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1. Push Operation on Stack.");
		printf("\n2. Pop Operation on Stack.");
		printf("\n3. Peep Operation on Stack.");
		printf("\n4. Exit.");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					peep();
					break;
			case 4:
					exit(1);
			default:
					printf("\n Wrong Choice.");
				}		
	}
	return 0;
}