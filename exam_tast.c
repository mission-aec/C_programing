#include<stdio.h>
int main()
{
    int a=4,b=5;
    //printf(" %d %d \n",a,b);
    b=a++ + a--;
    //printf(" %d %d \n",a,b);
    a=++b + b--;
    printf("%d%d \n",a,b);
    int x=10,c;
    b= x++; c=b--;
    //a=--b + c++;
    a=-b + c++;
    printf("%d%d%d",a,b,c); 
    
    return 0;
}