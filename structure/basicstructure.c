#include<stdio.h>
int main()
{
    struct employee
    {
        char name;
        int id ;
        float team;
    };
    struct employee saurabh;
    saurabh.id = 8510;
    saurabh.name = "sauarbh";
    saurabh.team = 2.5;

    
    return 0;
}