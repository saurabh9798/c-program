#include <stdio.h>
#include <string.h>
int main()
{
    int size = 0;
    char str[] = {"saurabh"};
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0,j = size-1; i <= j ; i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("the reverse string is :%s", str);
    return 0;
}