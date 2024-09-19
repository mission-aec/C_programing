#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="mission hassan";
    char st[20];
    //using strcpy() function
    // strcpy(st,ch);
    // printf("%s\n",ch);
    // printf("%s\n",st);


    //without using strcyp() function 
    int i;
    for (i = 0; ch[i]!= '\0'; i++)
    {
        st[i] = ch[i];
    }
    //st[i] = '\0'; 

    printf("%s\n", ch);
    printf("%s\n", st);
    return 0;
}
