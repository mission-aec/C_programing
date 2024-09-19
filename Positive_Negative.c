//positive & nagative
#include<stdio.h>
int main()
{
    int num;
    printf("enter your number : ");
    scanf("%d",&num);
    printf("your number is= %d\n",num);
    if(num>0)
    {
        printf("positive\n");
        printf("GOOD");
    }
    else if(num<0)
    {
        printf("nagative\n");
        printf("GOOD");
    }
    else
    {
        printf("number is zero\n");
    }
    return 0;
}