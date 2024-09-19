#include<stdio.h>
int main()
{   
    int a[5]={10,20,30,40,50},b[5],i;  //decleration & initialization
    
    printf("\narray1: ");
    for (int i = 0; i<5; i++)        //initialization
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    for (int i= 0; i<5; i++)
    {
        b[i] = a[i];
    }

    //copy 
    printf("\narray2: ");
    for (int i = 0; i<5; i++)        //initialization
    {
        printf("%d\t",b[i]);
    }



    return 0;
}