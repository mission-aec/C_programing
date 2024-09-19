#include <stdio.h>
int main()
{     //decimal to octal

      int number ;
      printf("enter your decimal number : ");
      scanf("%d",&number);
      printf("your octal number is: %o\n",number);
      fflush(stdin);
      //octal to decimal

      //int number ;
      printf("enter your octal number : ");
      scanf("%o",&number);
      printf("your octal number is: %d\n",number);
      fflush(stdin);
      //decimal to hexa-decimal
    
      //int number ;
      printf("enter your decimal number : ");
      scanf("%d",&number);
      printf("your hexa-decimal number is: %x\n",number);
      fflush(stdin);
      //hexa-decimal to decimal 

      //int number ;
      printf("enter your hexa-decimal number : ");
      scanf("%x",&number);
      printf("your decimal number is: %d\n",number);
      fflush(stdin);
      //octal to hexa-decimal

      //int number ;
      printf("enter your octal number : ");
      scanf("%o",&number);
      printf("your number hexa-decimal  is: %x\n",number);
      fflush(stdin);
      //hexa-decimal to octal

      //int number ;
      printf("enter your  hexa-decimal number : ");
      scanf("%x",&number);
      printf("your octal number is: %o\n",number);



      
      return 0;
}