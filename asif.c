#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,v,c,w,d,o;
    printf("Enter a string:");
    gets(str);
    i=0;
    v=0;
    c=0;
    w=0;
    d=0;
    o=0;
    while((ch=str[i])!='\0')
    {

        if(  ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )
        {
            v++;
        }
        else if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') )
        {
            c++;
        }
        else if(ch>='0' && ch<='9')
        {
            d++;
        }
        else if(ch==' ')
        {
            w++;
        }
        else
        {
            o++;
        }
        i++;
    }
    w++;
    printf("vowel=%d\n",v);
        printf("c=%d\n",c);
            printf("d=%d\n",d);
                printf("w=%d\n",w);
                    printf("o=%d\n",o);




return 0;
}






// #include<stdio.h>
// int main()
// {
//     char str[100],ch;
//     int i,v,c,w,d,o;
//     printf("Enter a string:");
//     gets(str);
//     i=v=c=w=d=o=0;
//     while((ch=str[i])!='\0'){

//         if(  ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )
//             v++;
//         else if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') )
//         c++;
//         else if(ch>='0' && ch<='9')
//             d++;
//         else if(ch==' ')
//             w++;
//         else
//             o++;
//     }
//     w++;
//     printf("vowel=%d\n",v);
//         printf("%d\n",c);
//             printf("%d\n",d);
//                 printf("%d\n",w);
//                     printf("%d\n",o);




//                     return 0;
// }