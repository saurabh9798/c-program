#include<stdio.h>
void PrintHW(int count );

int main()
{
    PrintHW(5);
    return 0;
}
// recursive function
void PrintHW(int count )
{   if (count == 0)
{
     return ;
}

    printf("hello World\n");
    PrintHW(count-1);
}