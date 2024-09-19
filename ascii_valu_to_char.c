#include <stdio.h>
int main()
{
    //ascii to character convert
    /*int num;
    printf("Enter any ascii number: ");
    scanf("%d",&num);
    printf("The ascii character is: %c\n",num); 
     fflush(stdin);
   
    //character to ascii convert
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    printf("The ascii number is: %d\n",ch); */

    //display A to Z and a to z ASCII value (ques19) 
    char ch;
    for(int i=65;i<123;i++)
    {
        if((i>=65 && i<=90) || (i>=97 && i<=122))
        {
        printf("For %c ASCII value is= %d\n",i,i);
        }
    }
   /*for(int j=97;j<123;j++)
    {
    printf("For %c ASCII value is= %d\n",j,j); 
    }*/
    return 0;
}

