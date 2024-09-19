#include<stdio.h>
int main()
{
    int year;
    printf("Enter your year: ");
    scanf("%d",&year);
    printf("your year is %d\n",year);
    if(year%400==0)
    {
        printf("year is leap year ");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("year is leap year ");
    }
    else
    {
        printf("year is not leap year ");
    }
    return 0;
}