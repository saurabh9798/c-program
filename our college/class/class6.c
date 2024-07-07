// wap in c to perfom artmatic operation using switch case
#include <stdio.h>
void main()
{
    int a, b;
    char opt;
    printf("Enter two number :-");
    scanf("%d %d", &a, &b);
    fflush(stdin);
    printf("Enter any artmmatic operation ");
    scanf("%c", &opt);
    switch (opt)
    {
    case '+':
        printf("addition : %d", a + b);
        break;
    case '-':
        printf("subtrction : %d", a - b);
        break;
    case '*':
        printf("multiplication : %d", a * b);
    case '/':
        printf("divison : %d", a / b);
    default:
        printf("invalid constant operator");
        break;
    case '%':
        printf("mode", a % b);
        break;
    }
}