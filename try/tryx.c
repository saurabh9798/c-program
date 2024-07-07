#include <stdio.h>
#include<string.h>
void main()
{
    char str[20] = {"abask"};
    int i,j, count =0,flag = 0;
    for ( i = 0; i < '\0'; i++)
    {
        count++;
    }
    for ( i = 0,j = count-1; i < j;i++,j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag ==0)
    {
       printf("palindrom");
    } else {
        printf("not palindrome");
    }
    
    
   
    
}