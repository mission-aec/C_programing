#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int digit,remainder,temp,sum=0;
    printf("Enter any digit: ");
    scanf("%d",&digit);    //digit=123
    digit=abs(digit);
    temp = digit;      //temp=123
    while(temp!=0)
    {
        remainder=temp%10;   //remainder=123%10=3   remainder=12%10=2   remainder=1%10=1
        sum=sum+remainder;    //sum=0+3   sum=3+2   sum=5+1=6
        temp=temp/10;       //temp=12    temp=1   temp=0
    }
    printf("your digit is= %d\n",digit);    //digit=123
    printf("sum of digit= %d\n",sum);      //print sum=6
    
    return 0;
}