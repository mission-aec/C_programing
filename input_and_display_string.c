#include<stdio.h>
int main()
{
    char name[50];
      printf("enter your name: ");
      //scanf("%s",&name);
      gets(name);
      //printf("your name is: %s",name);
      puts(name);
    return 0;
}