
/*
***reletional oparetor (>, >=, <, <+, ==, !=)
***control startment--conditional control startment( if__else , switch ) and loop control startment(for,while,do...while)
*/
//conditional control startment(if___else)


//odd-even
/*#include<stdio.h>
int main()
{
    int num;
    printf("enter your number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("even\n");
        printf("GOOD");
    }
    else
    {
        printf("odd\n");
        printf("GOOD");
    }
    return 0;
}*/


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


//letter grade using(marks)
/*#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    printf("your marks is : %.2f\n",marks);
    if(marks>=80)
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


//vowol & consonent
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    printf("your character is : %c\n",ch);
    if(ch=='a')
    {
        printf("vowol");
    }

    else if(ch=='e')
    {
        printf("vowol");
    }

    else if(ch=='i')
    {
        printf("vowol");
    }

    else if(ch=='o')
    {
        printf("vowol");
    }

     else if(ch=='u')
    {
       printf("vowol");
    }

    else if(ch=='A')
    {
       printf("vowol");
    }
     else if(ch=='E')
    {
       printf("vowol");
    }
     else if(ch=='I')
    {
       printf("vowol");
    }
     else if(ch=='O')
    {
       printf("vowol");
    }
     else if(ch=='U')
    {
       printf("vowol");
    }

    else
    {
       printf("consonent");
    }


    return 0;
}


