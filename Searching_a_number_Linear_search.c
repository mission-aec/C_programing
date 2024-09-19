//Searching a number (Linear search) using array

#include<stdio.h>
int main()
{
    int x,n;
    printf("enter array size: ");
    scanf("%d",&x);
    int num[x]; //decleration
    printf("how many number : ");
    scanf("%d",&n);
    printf("enter %d number : ",n);
    for (int i = 0; i <n; i++)        //initialization
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i <n; i++)
    {
         printf("%d\t",num[i]);
    }
    printf("\n");

    int value;
    int pos=-1;
    printf("enter the element to be searced: ");
    scanf("%d",&value);

    for (int i = 0; i < n; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            //printf("the position of %d value is: %d",value,pos);
            break;
        } 
    }
    if (pos==-1)
        {
           printf("Not found");
        }
    else
        {
            printf("the position of value %d is: %d",value,pos);
        }    
        
    return 0;
}