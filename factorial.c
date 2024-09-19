#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter your number what you want to see in factorial: ");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
      fact=fact*i;
    }
    printf("%d! = %d\n",n,fact);

   /*while(1)
    {
        int i,fact=1,n;
        printf("enter your number what you want to see in factorial: ");
        scanf("%d",&n);
        for ( i = 1; i<=n; i++)
          {
            fact=fact*i;
          }
        printf("%d! = %d\n",n,fact);

    }*/

    return 0;
    
}