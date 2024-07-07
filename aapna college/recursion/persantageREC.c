#include<stdio.h>
int calcpersantage(int science , int math ,int sanskrit);

int main()
{
    int sc = 98;
    int math = 95;
    int sanskrit = 99;
    printf(" percentage is : %d",calcpersantage(sc, math,sanskrit));
    return 0;

}
int calcpersantage(int science , int math ,int sanskrit)
{
    return((science + math + sanskrit)/3);
}