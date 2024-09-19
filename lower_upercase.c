#include <stdio.h>
#include <ctype.h>

int main()
{
    //lower to uper case without library funtion 
    /*char lower;
    printf("Enter yor lower letter : ");
    scanf("%c",&lower);
    fflush(stdin);
    printf("your lower letter: %c\n",lower);
    printf("your uper letter: %c\n",lower-32);*/

    //uper to lower case without library funtion 
    /*char uper;
    printf("Enter your uper letter : ");
    scanf("%c",&uper);
    fflush(stdin);
    printf("your uper letter: %c\n",uper);
    printf("your lower letter: %c\n",uper+32);*/

     //lower to uper case with library funtion 
    /*char lower,uper;
    printf("Enter yor lower letter : ");
    scanf("%c",&lower);
    fflush(stdin);
    printf("your lower letter: %c\n",lower);
    uper = toupper(lower);
    printf("your uper letter: %c\n",uper);*/

    //uper to lower case with library funtion 
   char uper,lower;
    printf("Enter your uper letter : ");
    scanf("%c",&uper);
    fflush(stdin);
    printf("your uper letter: %c\n",uper);
    lower = tolower(uper);
    printf("your lower letter: %c\n",lower);
    return 0;
}