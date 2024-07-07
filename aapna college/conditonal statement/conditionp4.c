#include <stdio.h>
int main(){
    int number;
    printf("enter your number:");
    scanf("%d",&number);
    if (number>=0)
    {
        printf("possitive number\n");
        if (number %2 == 0 )
        {
          printf("even number\n");
        }
        else{
            printf("odd number\n");
            }
       
        
    }
    else{
        printf("negative number\n");
    }

    return ;
}