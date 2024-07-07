#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks  : ");
    scanf("%d",&marks);
    if (marks >= 91  )
    {
       printf(" excellent");
    }
    else if (marks>=81 )
    {
       printf("very good");
    }
    else if (marks>=71 )
    {
        printf("good");
    }
    else if (marks>=61 )
    {
        printf(" can do better ");
    }
    else if (marks>=51 )
    {
        printf("average");
    }
    else if (marks>=41 )
    {
        printf(" below average");
    }
    else if (marks<=40)
    {
        printf("fail");
    }
    else
    {
        printf(" invalid");
    }
  return 0;
}