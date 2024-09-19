#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f;
    char name[500];
    int age,phone,num;

    //f=fopen("student.txt","w");
    //f=fopen("student.txt","r");
    f=fopen("student.txt","a");

    if (f==NULL)
    {
        printf("file dose not exist!\n");
    }
    else
    {
       printf("file exist!\n");
       printf("Enter how many student : ");
       scanf("%d",&num);
       fflush(stdin);
       for (int i = 1; i <= num; i++)
       {
        printf("enter student name: ");
        gets(name);
        fflush(stdin);
        printf("Enter student age: ");
        scanf("%d",&age);
        fflush(stdin);
        printf("Enter student phone number: ");
        scanf("%d",&phone);
        fflush(stdin);

        fprintf(f,"\n%s\t\t\t%d\t\t%d\n",name,age,phone);
        printf("file is succssfully written!");
       }
       fclose(f);
    }
    
}

