#include<stdio.h>
int main()
{
    int i;
    // for ( i = 0; i < 5; i++)
    // {
    //     printf(" \n*********** ",i);
    // }
    
    for ( i = 0; i < 2; i++)
    {
      for ( i = 0; i < 2; i++)
      {
        for ( i = 0; i < 5; i++)
        {
            printf("\n **********",i);
        }
        
      }
      
    }
    
    return 0;
}