#include <stdio.h>
#include<math.h>
int main()
{   
    //given base and height show the area 
   /* float base,height,area;
    printf("base=");
    scanf("%f",&base);

    printf("height=");
    scanf("%f",&height);

    //area = 0.5 * base * height;
    area = (float)1/2 * base * height;   //type castin

    printf("area= %.2f\n",area);  */


    //given the lenth of tringuler  show the area  
   // float a,b,c,s,area;
    double a,b,c,s,area;
    printf("Enter value: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt (s*(s-a)*(s-b)*(s-c));
    printf("area= %lf\n",area);

    return 0;
}

