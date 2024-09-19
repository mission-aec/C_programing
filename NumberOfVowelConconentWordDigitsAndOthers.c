#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    printf("enter a string: ");
    gets(str);
    int i,vowel,consonent,digit,word,other;
    i=vowel=consonent=digit=word=other=0;
    while ((ch=str[i])!='\0')
    {
        
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        vowel++;
    }

    else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        consonent++;
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
    printf("vowel= %d\n",vowel);
    printf("consonent= %d\n",consonent);
    printf("digits= %d\n",digit);
    printf("word= %d\n",word);
    printf("other= %d\n",other);
    return 0;
}