#include<stdio.h>
#include<string.h>
int main()
{   
    //without usung strcat() function
    // char s1[100]="mission ";
    // char s2[100]="hassan";
    // int i=0,len=0,j=0;
    // while (s1[i]!='\0')
    // {
    //     i++;
    //     len++;
    //     //i++;
    // }
    // while (s2[j]!='\0')
    // {
    //     s1[len+j]=s2[j];
    //     j++;

    // }
    // printf(" %s\n",s1);


    // usung strcat() function
    char s1[100]="mission ";
    //char s2[100]="hassan";
    //strcat(s1,s2);
    strcat(s1,"hassan");
    printf(" %s\n",s1);

    return 0;
    
}