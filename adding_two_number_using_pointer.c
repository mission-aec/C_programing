#include<stdio.h>
int main()
{
    int x=5,y=10,sum;
    int *p,*f;
    p=&x;
    f=&y;
    sum=*p+*f;
   
    printf("sum of two number: %d\n",sum);
    return 0;
}