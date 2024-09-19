#include<stdio.h>
int dispaly(int a[])
{
   int max=a[0];
    for (int  i = 0; i < 5; i++)
    {
      if (max<a[i])
      {
        max=a[i];
      }
      
    }
   return max;
}
int main()
{
    int num[]={10,20,30,40,50};
   int max= dispaly(num);
   printf("%d\n",max);
   return 0;
}
