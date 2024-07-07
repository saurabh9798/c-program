// when we want to out any loop and also nexted loop then we use break statement 
#include<stdio.h>
int main()
{
    // int x;
    // printf("Enter any number : ");
    // scanf("%d",&x);
    // if (x % 2==0)
    // {
    //   printf(" %d \n", x );
    // }
    // else
    // {
    //     printf(" Thank you ");
    // }
    int p;
    do
    {
        printf("Enter number : ");
        scanf("%d",&p);
        printf(" %d \n",p);

        if (p % 2 != 0)
        {
            break;
        }
        
      
    } while (1);
    printf(" thank you");
    

    
 return 0;
}