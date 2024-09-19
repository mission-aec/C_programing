//0 1 1 2 3 5 8 13.......
#include<stdio.h>
int main()
{
    int n,first=0,second=1,count=0,fibo;
    printf("enter your range  number: ");
    scanf("%d",&n);
    while (count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf(" %d ",fibo);
        count++;
    }
    
    return 0;
}