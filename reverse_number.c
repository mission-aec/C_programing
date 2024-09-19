#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
     int num;
    printf("Enter an integer: ");
    scanf("%d", &num);     //num=123
    int originalNum, remainder, reversedNum = 0;
    num=abs(num);
    originalNum = num;  //originalnum=123
   // while(num>0)
    while (num != 0) 
    {
        remainder = num % 10;    //remainder= 123%10=3   12%10=2   1&10=1    
        reversedNum = reversedNum * 10 + remainder;   //reversedNum= 0*10+3=3   3*10+2=32     32*10+1=321
        //num=num/10;   
        num /= 10;   //num=123/10=12     12/10=1   1/10=0
    }
    printf("Your original number is= %d\n",originalNum);    //print original number=123
    printf("Your reverse number is= %d\n",reversedNum);     //print reverse number=321


    return 0;
}