#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter size of arrzy: ");
    scanf("%d",&x);
    int num[x];
    printf("how many number you want to insert in array: ");
    scanf("%d",&n);
    printf("enter %d number: ",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);  
    }
    for (int  i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\n");
    int max=num[0];
    for (int i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
        else
        {
            //max=num[0];
            continue;
        }
    }
    printf("maximun= %d\n",max);

    int min=num[0];
    for (int i = 1; i < n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
        else
        {
            //min=num[0];
            continue;
        }
    }
    printf("minimun= %d\n",min);
    

 return 0;   

}