//0 1 1 2 3 5 8 13.......
#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter size of arrzy: ");
    scanf("%d",&x);
    
    // fibo[0]=0;
    // fibo[1]=1;

    /*declearation*/
    int fibo[x];
    printf("how many number you want see in fibonacci: ");
    scanf("%d",&n);
    
    /*initalization*/
    fibo[0]=0;
    fibo[1]=1;
    for (int i = 2; i < n; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    printf("\n");

    /*ourpur print*/
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",fibo[i]);   
    }

    return 0;
}