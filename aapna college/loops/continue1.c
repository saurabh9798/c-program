#include<stdio.h>
int main()
{   //first method
    for (int i = 5; i <=50; i++)
    {
       if (i % 2==0)
       {
        continue;
       }
       printf(" %d \n",i);
    }

    //second metrhod 
    // for (int i = 1; i <= 50; i= i+2)
    // {
    //    printf(" %d ",i);
    // }
    
    // third method 
//    int i;
//     for ( i = 5; i <= 50; i++)
//     {
//        if ( i % 2 !=0)
//        {
//         printf(" %d\n",i);
//        }
       
//     }
    return 0;
}