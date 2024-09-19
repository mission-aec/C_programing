//calculetor using switch
#include<stdio.h>
int main()
{
    double a,b,d;
    char c;
    printf("Enter your oparetor: ");
    scanf("%c",&c);
    fflush(stdin);
    printf("enter your first number: ");
    scanf("%lf",&a);
    fflush(stdin);
    printf("enter your secound number: ");
    scanf("%lf",&b);
    fflush(stdin);

    switch (c)
    {
    case '+':
       { d=a+b;
        printf("sumation= %lf",d);
        break;
       }
    case '-':
       { d=a-b;
        printf("subtitusion= %lf",d);
        break;
       }
    case '*':
       { d=a*b;
        printf("maltiply= %lf",d);
        break;
       }
    case '/':
       { d=a/b;
        printf("divided= %lf",d);
        break;
       }   
    default:
       {
        printf("wrong oparetor");
        break;
       }
        
    }


    return 0;
}