// impliment electricty bill according to bihar goverment  using else if lether statement 
#include<stdio.h>
int main()
{
    int unit,totalbill;
    printf("Enter your unit number :- ");
    scanf("%d",&unit);
   
    if (unit<25)
    {
         totalbill = 2.5*unit;
    }
    else if(unit<50)
    {
         totalbill = 5*unit;
    }
    else if (unit<75)
    {
        totalbill=6*unit;
    }
    else if (unit<=100)
    {
        totalbill = 7.5*unit;
    }
        
    else
    {
        printf("nothing");
    }
    
    printf("your total bill %d",totalbill);
    
    
    return 0;
}