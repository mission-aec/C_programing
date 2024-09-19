#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<20; i++)
    {
        
        if(i%3==0)
        {
           //continue;     //bypass
           printf("%d\n",i);
           continue;
        }
      else if(i==10)
        {
           // break;
            printf("%d\n",i);
            break;   //loop tarminate
        }
       // printf("%d\n",i);
    }

    return 0;

}
