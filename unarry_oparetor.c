#include<stdio.h>
int main()
{
    int a=2,d;
    //d=+a;   //d=2  a=2
    //d=-a;   //d=-2 a=2
    //d=++a;    //d=3   a=3
    //d=a++;    //d=2  a=3
    //d=--a;  //d=1   a=1
    d=a--; //d=2    a=1
    
    printf("%d\n",d);
    printf("%d\n",a);
    return 0;
}