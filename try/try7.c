#include <stdio.h>
int mian()
{
    int n, h, t, u;
    printf("\n enter max 3 digits number ");
    scanf("%d", &n);
    h = n / 100;
    switch (h)
    {
    case 1:
        printf("One Hundred ");
        break;
    case 2:
        printf("Two Hundred ");
        break;
    case 3:
        printf("Three Hundred ");
        break;
    case 4:
        printf("Four Hundred ");
        break;
    case 5:
        printf("Five Hundred ");
        break;
    case 6:
        printf("Six Hundred ");
        break;
    case 7:
        printf("Seven Hundred ");
        break;
    case 8:
        printf("Eight Hundred ");
        break;
    case 9:
        printf("Nine Hundred ");
        break;
    }
    n = n % 100;
    if (n < 20)
    {
        switch (n)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 10:
            printf("Ten ");
            break;
        case 11:
            printf("Eleven ");
            break;
        case 12:
            printf("Twelve ");
            break;
        case 13:
            printf("Thrteen ");
            break;
        case 14:
            printf("Fourteen ");
            break;
        case 15:
            printf("Fifteen ");
            break;
        case 16:
            printf("Sixteen ");
            break;
        case 17:
            printf("Seventeen ");
            break;
        case 18:
            printf("Eithteen ");
            break;
        case 19:
            printf("Ninteen ");
            break;
        }
    }
    else
    {
        t = n / 10;
        u = n % 10;
        switch (t)
        {
        case 1:
            printf("Twenty ");
            break;
        case 2:
            printf("Thirty ");
            break;
        case 3:
            printf("Forty ");
            break;
        case 4:
            printf("Fifty ");
            break;
        case 5:
            printf("Sixty ");
            break;
        case 6:
            printf("Seventy ");
            break;
        case 7:
            printf("Eighty ");
            break;
        case 8:
            printf("ninty ");
            break;
        }
        switch (u)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
}