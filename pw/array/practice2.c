#include<stdio.h>
int main()
{int marks[10];
    // int marks[10]={95,90,31,25,100,50,65,89,97,30};
    for (int i = 0; i < 10; i++)
    {
        
        printf("Enter %d number :",i);
        scanf("%d",&marks[i]); 
    }
    
    for (int i = 0; i <10 ; i++)
    {
       
        if (marks[i]<=35)
        {
            printf("%d ",i);
        }
        printf("\n");
        if (marks[i]<=35)
        {
            printf("%d ",marks[i]);
        }
        
    }
    
    return 0;
}