//strong number: sum of factorial of a num =num
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
     int num,tamp,remainder,sum=0,fact;
     printf("enter your number : ");
     scanf("%d",&num);
     tamp=num;


    while (tamp!=0)
    {
        remainder=tamp%10;
        fact=1;
        //sum=sum+fact(remainder);
        for ( int i = 1; i <= remainder; i++)
        {
            fact=fact*i;
        }
        sum+=fact;
        tamp/=10;
    }


    printf("totel sum= %d\n",sum);

    if (sum==num)
    {
        printf("%d is strong number \n",num);
    }
   else
    {
       printf("%d is not strong number \n",num);
    }
   
    
return 0;
}