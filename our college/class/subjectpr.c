//wap in c to input marks of four subject after that find total and persantage marks 
#include <stdio.h>
int main()
{
  float  m1,m2,m3,m4,tm,pm;
  int rs;
  printf("enter marks of four subject");
  rs = scanf("%f\n,%f\n,%f\n,%f\n",&m1,&m2,&m3,&m4);
  pm = tm/4;
  printf ("total marks : - %f \n persantage marks :- %f\n",tm,pm);
  printf("the value of rs :- %d",rs);
  return 0;


}