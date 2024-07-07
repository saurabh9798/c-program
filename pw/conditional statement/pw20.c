/*
if the age of ram,shyam and ajay are input through the keyboard , wap to determine the youngest of the three.
*/
#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("enter the age of  ram : ");
    scanf("%d", &ram);
    printf("enter the age of  shyam : ");
    scanf("%d", &shyam);
    printf("enter the age of  ajay : ");
    scanf("%d", &ajay);
    if (ram > shyam & ram > ajay)
    {
        printf(" ram is bigger in age ");
    }
    else if (shyam > ram & shyam > ajay)
    {
        printf(" shyam is bigger in age ");
    }
// else
    else 
   {
        printf(" ajay is bigger in age ");
    }

    return 0;
}