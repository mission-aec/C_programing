//counting number of a digit in an integer 
#include<stdio.h>
int main()
{
   int num,count=0;
   printf("enter the number:  ");
   scanf("%d",&num);
    while (num!=0)
    {
        num/=10;
        count++;
    }
    printf("total digit of the number= %d\n ",count);

    return 0;
}