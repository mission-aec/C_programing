//sum of queb of a digits
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    double digit,remainder,temp,sum=0,x;
    printf("Enter any digit: ");
    scanf("%lf",&digit);
    digit = abs(digit);
    printf("\n%lf",digit);
    temp = digit;
    printf("\n%lf",temp);
    while(temp!=0)
    {
        remainder=(int)temp%10;
        //sum=sum+remainder*remainder*remainder;
        printf("\n%lf",remainder);
        x=pow(remainder, 3);
        printf("\n%lf",x);
        sum = sum + x;
        printf("\n%lf",sum);
        temp=(int)temp/10;
        printf("\n%lf",temp);
    }
    printf("your digit is= %lf\n",digit);
    printf("sum of digit= %lf\n",sum);
    if(digit==sum)
    {
        printf("this digit is armstrong\n");
    }
    else
    {
         printf("this digit is not armstrong\n");
    }
    return 0;
}
