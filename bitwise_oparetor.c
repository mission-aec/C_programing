//bitwise oparetor( &, |,^,<<,>>,~)
#include<stdio.h>
int main()
{
    int a=12;
    int b=54;
    int c,d,e;

    //bitwise and 
    c=a&b;
    printf("a&b= %d\n",c);

    //bitwise or
    d=a|b;
    printf("a|b= %d\n",d);

    //bitwise exor
    e=a^b;
    printf("a^b= %d\n",e);

    return 0;
}