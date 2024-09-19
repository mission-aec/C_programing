#include<stdio.h>
//return_type function_name(parameter)
double area(double a,double b)
    {
       return 0.5*a*b;
    }
   
int main()
{
    double hight,base;
    printf("enter hight & base of a triangle : ");
    scanf("%lf %lf",&hight,&base);
    printf("%lf hight & %lf base triangle area is= %lf\n",hight,base,area(hight,base));
    
    return 0;
}