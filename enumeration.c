#include<stdio.h>
enum day
{
   sun=1,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum day day1,day2,day3,day4,day5,day6,day7;
    day1=sun;
    day2=mon;
    day3=tue;
    day4=wed;
    day5=thu;
    day6=fri;
    day7=sat;


    printf("day1= %d\n",day1);
    printf("day2= %d\n",day2);
    printf("day3= %d\n",day3);
    printf("day4= %d\n",day4);
    printf("day5= %d\n",day5);
    printf("day6= %d\n",day6);
    printf("day7= %d\n",day7);
    
    return 0;
}