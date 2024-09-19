//biger and lower number
/*#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter your num1: ");
    scanf("%d",&num1);
    printf("enter your num2: ");
    scanf("%d",&num2);
    if(num1>num2)
       {
           printf("large= %d\n",num1);
       }
    else if(num1<num2)
       {
           printf("large= %d\n",num2);
       }
    else
       {
           printf("numbers er equel");
       }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter your num1: ");
    scanf("%d",&num1);
    printf("enter your num2: ");
    scanf("%d",&num2);
    if(num1<num2)
       {
           printf("small= %d\n",num1);
       }
    else if(num1>num2)
       {
           printf("small= %d\n",num2);
       }
    else
       {
           printf("numbers er equel");
       }
    return 0;
}