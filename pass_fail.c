#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    printf("your marks is : %.2f\n",marks);

    if(marks>=33)
    {
       printf("you are pass");
    }

    else
    {
       printf(" sorry you are fail");
    }


    return 0;
}

