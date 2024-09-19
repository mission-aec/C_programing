//using strlen() function
/*#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="mission hassan";
    int  len = strlen(ch);
    printf("%d\n",len);
    return 0;
}*/



//without using strlen()  function
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="mission hassan";
    int i=0,len=0;
    while (ch[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d\n",len);
    return 0;
}
