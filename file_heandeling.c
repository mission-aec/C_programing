#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f;
    char ch[500]="mission hassan!!";
    int length=strlen(ch);
    int i;


    //f=fopen("inputmission.txt","w");
    f=fopen("inputmission.txt","w");
    //f=fopen("inputmission.txt","a");


    // if(f==NULL)
    // {
    //     printf("file dose not exist!");
    // }
    // else
    // {
    //     printf("file exist\n");
    //     for ( i = 0; i < length; i++)
    //     {
    //        fputc(ch[i],f);
    //     }
    //     printf("file is succssfully written!");
    //     fclose(f);
    // }



   //fprintf(f,"\nmission");
    // fprintf(f,"I hate ashrai engineering collage");
    // fprintf(f,gets(ch));
    fgets(ch,500,f);
    printf("%s",ch);
    fclose(f);
    return 0;
}