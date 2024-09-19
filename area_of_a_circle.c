#include <stdio.h>
#include<math.h>
int main()
{   
   double area,radius;
   //float pi=3.1416;
   printf("Enter your radius: ");
   scanf("%lf",&radius);
   //area=pi*radius*radius;      //without using libary function
   area=M_PI*radius*radius;     // using libaray function
   printf("your area= %.4lf",area);
    return 0;
}