#include<stdio.h>
// ternary operator syntex
// condition ? do something if true : do if false;
int main (){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    age>=18 ? printf("adult \n") : printf("not adult \n");

    return 0;
}