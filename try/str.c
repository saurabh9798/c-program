#include <stdio.h>
#include <string.h>
int main()
{

    char str[50] = "saurabh kumar";
    // puts(str);
    for (int i = 0; str[i] !='\0'; i++)
    {
       
        // strrev(str);
        if (i == '\0')
        {
            printf("%c ", str[i]);
        }
        
          
    }
    // strrev(str);
    // printf("Reversed string is: %s", str);

    return 0;
}