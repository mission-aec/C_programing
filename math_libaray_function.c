#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("enter x:");
    scanf("%lf",&x);
    //double result=log(x);
    //double result=log10(x);
    //double result=exp(x);
    //double result=sin(x);
    //double result=cos(x);
   // double result=tan(x);
    //double result=round(x);
    //double result=trunc(x);
    //double result=ceil(x);
    double result=floor(x);

    //printf("log(%lf)= %lf",x,result);
    //printf("log10(%lf)= %lf",x,result);
    //printf("exp(%lf)= %lf",x,result);
    //printf("sin(%lf)= %lf",x,result);
    //printf("cos(%lf)= %lf",x,result);
    //printf("tan(%lf)= %lf",x,result);
    //printf("round(%lf)= %lf",x,result);
    //printf("trunc(%lf)= %lf",x,result);
    //printf("ceil(%lf)= %lf",x,result);
    printf("floor(%lf)= %lf",x,result);
         
    return 0;
}