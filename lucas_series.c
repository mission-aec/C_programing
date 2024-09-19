// 2 1 3 4 7 11......
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of terms in lucas series: ");
    scanf("%d",&n);
    int first=2,second=1,next;
    printf("lucas series up to %d terms: \n",n);
    printf(" %d  %d ",first,second);
    for (int i = 3; i <=n; i++)
    {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
    }
    printf("\n");
    return 0;

}