#include <stdio.h>
#include <string.h>
int main()
{
      //gets and puts ??
      char name[50];
      printf("enter your name: ");
      
      //scanf("%s",&name);
      //gets(name);
      fgets(name,sizeof(name),stdin);
     size_t len = strlen(name);
      if (name[len-1]='\n')
      {
            name[len-1]='\0';
      }

      
      //printf("your name is: %s",name);
      puts(name);
     //getchar and putchar??
      char ch;
      printf("enter your charcater: ");
      ch=getchar();
      //scanf("%c",&ch);
      //printf("your ch: %c",ch);
      printf("your ch: ");
      putchar(ch);
      return 0;
}

