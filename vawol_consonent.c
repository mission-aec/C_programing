//vowol & consonent using reletional oparetor

/*#include<stdio.h>
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
}*/



//vawol & conconent using logical oparetor

/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    printf("your character is : %c\n",ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("vowol");
    }

    else
    {
       printf("consonent");
    }


    return 0;
}*/



//vawol & conconent using switch
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    printf("your character is : %c\n",ch);
    
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      printf("vawol");
      break;
    
    default:
      printf("consonent");
      break;
    }

    return 0;
}