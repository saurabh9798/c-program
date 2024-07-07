#include<stdio.h>
int main(){
float m1; // for math marks
float m2; // for physics marks
float m3; // for chemistry marks
float m4; // for english marks
float m5; // for hindi marks
printf(" enter your al marks");
scanf("%f",&m1);
scanf("%f",&m2);
scanf("%f",&m3);
scanf("%f",&m4);
scanf("%f",&m5);
float p = (m1+m2+m3+m4+m5)/5 ;
printf("the value of persantege of : %f",p);
return 0;
}