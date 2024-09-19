#include<stdio.h>
//return_type function_name(parameter)
int power(int a,int b)
    {
       int x=1;
       for (int i = 0; i <b; i++)
       {
          x=x*a;
       }
       //printf("%d",x);
       return x;
    }
   
int main()
{
    int exp,base;
    printf("enter base & exp of a number : ");
    scanf("%d %d",&base,&exp);
    //power(base,exp);
    printf("%d base & %d exp of number is= %d\n",base,exp,power(base,exp));
    
    //return 0;
}