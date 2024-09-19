//letter grade using relational oparetor (marks)
/*#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    printf("your marks is : %.2f\n",marks);
    if(marks<0)
    {
        printf("marks are invalid");
    }
    else if(marks>100)
    {
        printf("marks are invalid");
    }
    else if(marks>=80)
    {
        printf("you got A+");
    }

    else if(marks>=70)
    {
       printf("you got A");
    }

    else if(marks>=60)
    {
       printf("you got A-");
    }

    else if(marks>=50)
    {
       printf("you got B+");
    }

     else if(marks>=40)
    {
       printf("you got B");
    }

    else if(marks>=33)
    {
       printf("you got B-");
    }

    else
    {
       printf("you are fail");
    }


    return 0;
}*/


//gread marks using logical oparetor 
#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    printf("your marks is : %.2f\n",marks);
    if(marks<0 || marks>100)
    {
        printf("marks are invalid");
    }
    
    else if(marks>=80 && marks<=100)
    {
        printf("you got A+");
    }

    else if(marks>=70 && marks<=79)
    {
       printf("you got A");
    }

    else if(marks>=60 && marks<=69)
    {
       printf("you got A-");
    }

    else if(marks>=50 && marks<=59)
    {
       printf("you got B+");
    }

     else if(marks>=40 && marks<=49)
    {
       printf("you got B");
    }

    else if(marks>=33 && marks<=39)
    {
       printf("you got B-");
    }

    else
    {
       printf("you are fail");
    }


    return 0;
}

