#include<stdio.h>
#include<math.h>
int main()
{
    int number,sum=0;
    printf("enter your sequence number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        sum = (i*i)+sum;
    }
    printf("totel sum of sequence= %d ",sum);
    return 0;
}
