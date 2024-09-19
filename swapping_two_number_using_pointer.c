#include<stdio.h>
int main()
{
    int x=5,y=10,tamp;
    int *p,*f;
    p=&x;
    f=&y;
    printf("x: %d\n",*p);
    printf("y: %d\n",*f);
    tamp=*p;
    *p=*f;
    *f=tamp;
   
    printf("x: %d\n",*p);
    printf("y: %d\n",*f);
    return 0;
}
