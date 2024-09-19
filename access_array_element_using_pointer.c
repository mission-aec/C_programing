#include<stdio.h>
int main()
{
    int  a[5]={10,20,30,40,50};
    int *p;
    // p=&a[0];
    // for (int i = 0; i <5; i++)
    //     {
    //         printf("%d\t",*p);
    //         p++;
    //     }


    for (int i = 0; i < 5; i++)
    {
        p=&a[i];
        printf("%d\t",*p);
    }
    
    return 0;
}