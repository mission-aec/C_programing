#include<stdio.h>
int main()
{
    char name[50];
    int i=0;
      printf("enter your name: ");
      //scanf("%s",&name);
      gets(name);
      while (name[i]!='\0')
      {
       printf("%c\n",name[i]);
      //puts(name);
       i++;
      }
      
    return 0;
}