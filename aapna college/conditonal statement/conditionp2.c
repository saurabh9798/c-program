#include<stdio.h>
int main(){
    int marks ;
    printf("enter your marks :");
    scanf("%d",&marks);
    if (marks>=95){
printf("excellent *** you're brilleant \n");
    }
    else if (marks>=90){
printf("excellent **");
    }
    else if (marks >= 80){
        printf("very good *");

    }
    else if (marks>=75){
        printf("good");
    }
    else if (marks>= 60){
        printf("average you need to improvement");

    }
    else if (marks >=45){
        printf("poor you need to too much improvement");
    }
    else if (marks <45){
        printf("very poor you need too tooo much improvement");
    }
    else{
        printf("fucked'up you are chutiya ");
    }
    return 0;
}