//genrate employee salary slip 
#include<stdio.h>
int main()
{
    float income,bs,gs,ns,hra,da,ta,ma,pf;
    printf("Enter your total income ");
    scanf("%d",&bs);
    if (bs<=10000)
    {
       hra= bs*0.2;
       da=bs*0.8;
    }
    else if (bs<=20000)
    {
        hra=bs*0.25;
        da=bs*1;
    }
    else if (bs<=30000)
    {
        hra=bs*0.3;
        da=bs*1;
    }
    else{
        hra=bs*0.35;
        da=bs*1.1;
    }
    gs=hra+da+bs;
   printf("gross sallery %d",gs);
    
    

    return 0;
}