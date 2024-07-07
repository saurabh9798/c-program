#include<stdio.h>
#include<string.h>
// #include<stdlib.h>
// #include<conio.h>
int main()
{
    char str[80], temp[20];
    int i,j;
    puts("Enter string:");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
        temp[j++]=str[i];
         continue;
        }
        temp[j]='\0';
        strrev(temp);
        printf("%s ",temp);
        if(str[i]==' ')
        {
            j=0;
            strcpy(temp,"");
        }
    }
    temp[j]='\0';
    strrev(temp);
    printf("%s",temp);
}