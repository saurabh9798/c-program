// menu driven program

#include<stdio.h>
void main ()
{
int ch
while(1)
{
printf ("\n1 to add two number");
printf("\n2 to product two number");
printf("\n3 to check even odd");
printf("\n4 to exit ");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
    case 1
    printf("\n enter two number");
    scanf("%d %d",&a ,&b);
    printf("\n sum of %d and %d=%d",a,b,a+b);
    break;
    case 2
    printf("/enter two no");
    scanf("%d %d",&a,&b);
    printf("\n product of %d and %d=%d",a,b,a+b);
    break;
    case 3
    printf("/n enter any number=");
    scanf("%d",&a);
    if (a%2==0)
    printf("\n %d is even",a);
    else
    printf("\n %d is odd",a);
    break;
    case 4
    exit(1);
    default
    printf("\n wrong choice");
}
 }}