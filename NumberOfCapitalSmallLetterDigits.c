#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    printf("enter a string: ");
    gets(str);
    int i,small,capital,digit,word,other;
    i=small=capital=digit=word=other=0;
    while ((ch=str[i])!='\0')
    {
        
    if(ch>='a'&&ch<='z')
    {
        small++;
    }

    else if(ch>='A'&&ch<='Z')
    {
        capital++;
    }

    else if (ch>=48 && ch<=57)
    {
        digit++;
    }
    
    else if (ch==' '||ch=='\n')
    {
        word++;
    }
    
    else
    {
        other++;
    }
        i++;
    }
    word++;
    printf("small= %d\n",small);
    printf("capital= %d\n",capital);
    printf("digits= %d\n",digit);
    printf("word= %d\n",word);
    printf("other= %d\n",other);
    return 0;
}