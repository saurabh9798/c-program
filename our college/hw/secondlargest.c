#include<stdio.h>

int main()
{
    int i,j;
    char str[30] ;
    puts("Enter string");
    gets(str);
    for (int i = 65; i<= 90; i++)
    {
        for (int j = 0; j < str[j] != '\0'; j++)
        {
            if (i==str[j])
            {
                printf("%c",str[j]);
            }
            
        }
           
    }
     
    return 0;
}