#include<stdio.h>
union a
{
    int x,y;
};
int main()
{
    union a z;
    z.x=20;
    printf("x= %d\n",z.x);
    printf("y= %d\n",z.y);

    z.y=10;
    printf("x= %d\n",z.x);
    printf("y= %d\n",z.y);
    //getch();
    return 0;
}
