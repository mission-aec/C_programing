//capital/small letter
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your letter: ");
    scanf("%c",&ch);
    printf("your letter is %c\n",ch);
    if(ch>='A' && ch<='Z')
    {
        printf("capital letter is %c",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("small letter is %c",ch);
    }
    else
    {
        printf("it is not a letter");
    }

    return 0;
}