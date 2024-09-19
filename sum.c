
#include <stdio.h>
int main()
{
    //sum of two num
   /* int num1,num2,sum;
    printf("enter two number: ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("sum= %d",sum);*/

    //sum of three num and avg
    int num1,num2,num3,sum;
    float avg;
    printf("enter three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("sum= %d\n",sum);
    avg =(float)sum/3;       //type casting   
    printf("avg= %f",avg);



    return 0;
}
