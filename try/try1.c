#include<stdio.h>
int main(){
    int i = 10;
    switch (i % 10 == 0)
    {
    case 1:
    printf("good");
        break;
    
    default:
    printf("bad");
        break;
    }
    return 0;
}