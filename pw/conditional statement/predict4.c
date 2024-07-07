#include<stdio.h>
int main()
{
int x=10,y,z;
y=x=15;
z=x<15;
printf("\nx=%dy=%dz=%d",x,y,z);
return 0;
}