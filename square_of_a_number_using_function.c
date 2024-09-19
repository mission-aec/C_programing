#include<stdio.h>
//return_type function_name(parameter)
int square(int a)
    {
       return a*a;
    }
   
int main()
{
    int num1;
    printf("enter a number : ");
    scanf("%d",&num1);
    printf("%d square is= %d\n",num1,square(num1));
    
    return 0;
}

    