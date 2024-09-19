#include<stdio.h>
int main()
{
    int x=5,y=10;
    int *p,*f;
    p=&x;
    f=&y;

    printf("value of x: %d\n",x);
    printf("address of x: %d\n",&x);
    printf("value of x: %d\n",*p);
    printf("address of x: %d\n",p);
    printf("address of p: %d\n",&p);


    printf("\nvalue of y: %d\n",y);
    printf("address of y: %d\n",&y);
    printf("value of y: %d\n",*f);
    printf("address of y: %d\n",f);
    printf("address of f: %d\n",&f);
    return 0;
}