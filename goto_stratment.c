#include<stdio.h>
int main()
{
    int i=1;
    mission:      //label
         printf("%d\t",i);
         i++;
    if(i<=5)
       {
        goto mission;     //lable calling
       }
    return 0;
}