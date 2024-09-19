//odd-even
#include<stdio.h>
int main()
{
    int num;
    printf("enter your number : ");
    scanf("%d",&num);
    printf("your number is= %d\n",num);
    if(num%2==0)
    {
        printf("even\n");
        printf("GOOD");
    }
    else
    {
        printf("odd\n");
        printf("GOOD");
    }
    return 0;
}