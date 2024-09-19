#include<stdio.h>
int dispaly(int a[])
{
   
    for (int  i = 0; i < 5; i++)
    {
       printf("%d\t",a[i]);
    }
   
}
int main()
{
    int num[]={10,20,30,40,50};
    dispaly(num);
   return 0;
}






