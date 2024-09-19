#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[80]="madam";
    char ch2[80];
    int i,len=0,k,j;
    printf("ch1=%s\n",ch1);
    //using strrev() function

    strrev(ch1);
    printf("ch2=%s\n",ch1);

    // without using strrev() function
    //  while (ch1[i]!='\0')
    //  {
    //     i++;
    //     len++;
    //     //i++;
    //  }

    //  for ( j = 0,i=len-1;  i>=0; j++,i--)
    //  {

    //     ch2[j]=ch1[i];
    //     printf("ch2=%s\n",ch2[j]);


    //  }
     //ch2[i]='\0';
     //printf("ch2=%s\n",ch2);
     int d=strcmp(ch1,ch2);
     if (d==0)
     {
        printf("palindrom");
     }
     else
     {
        printf("not palindrom");
     }
     


    return 0;

}
