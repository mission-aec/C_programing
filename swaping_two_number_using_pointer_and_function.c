#include<stdio.h>
void display(int a,int b)
{
    printf("x: %d\n",a);
    printf("y: %d\n",b);
}
int main()
{
    int x=5,y=10,tamp;
    int *p,*f;
    p=&x;
    f=&y;
    display(*p,*f);

    
    tamp=*p;
    *p=*f;
    *f=tamp;
    display(*p,*f);
    
    return 0;
}
