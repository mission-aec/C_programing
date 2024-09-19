#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("your number : ");
    scanf("%lf",&x);
    result=sqrt(x);       //libaray function sqrt(x); value is double 
   printf("result= %.2lf",result);
    return 0;
}