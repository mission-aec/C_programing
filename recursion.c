#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }

}
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    int result=fact(x);
    printf("factorial= %d\n",result);
    return 0;
}
