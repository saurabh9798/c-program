#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
void main()
{
    // int n =9;
    int f = fact(5);
    printf("%d", f);
    // printf("%d ", fact(5));
}