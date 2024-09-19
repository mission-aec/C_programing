//enter three number read and display mimimum
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("your three number: %d %d %d \n",num1,num2,num3);
    if(num1<num2 && num1<num3)
    {
        printf("small number= %d ",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("small number= %d ",num2);
    }
     else if(num3<num1 && num3<num2)
    {
        printf("small number= %d ",num3);
    }
    else
    {
        printf("three number are equal");
    }

    return 0;
}

