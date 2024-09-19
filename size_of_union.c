#include<stdio.h>
union a
{
    int x;
};

union b
{
    char ch;
    int y;
};

union c
{
    char name[20];
    double z;

};

union d
{
    float w;
    char e;
};
int main()
{
    union a t1;
    union b t2;
    union c t3;
    union d t4;
    printf("size of a: %d\n",sizeof(t1));
    printf("size of b: %d\n",sizeof(t2));
    printf("size of c: %d\n",sizeof(t3));
    printf("size of d: %d\n",sizeof(t4));

    
    //getch();
    return 0;
}
