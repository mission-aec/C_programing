#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number : ");
    scanf("%d %d",&num1,&num2);
    printf("sum= %d\n",sum(num1,num2));
    printf("sub= %d\n",sub(num1,num2));
    return 0;
}
//return_type function_name(parameter)

    int sum(int a,int b)
    {
       return a+b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }