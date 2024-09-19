/*array decleration: data_type array_name[array_size]
defination: an array is a collection of variable of same type. */


#include<stdio.h>
int main()
{   int x,n;
    printf("enter array size: ");
    scanf("%d",&x);
    int num[x]; //decleration
    printf("how many number : ");
    scanf("%d",&n);
    //int num[5]={10,20,30,40,50};  //decleration & initialization
    //int num[5];
    // num[0]=10;
    // num[1]=20;
    // num[2]=30;     //initialization
    // num[3]=40;
    // num[4]=50;
    printf("enter %d number : ",n);
    for (int i = 0; i <n; i++)        //initialization
    {
        scanf("%d",&num[i]);
    }
    //scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);  


    // printf("%d\n",num[0]);
    // printf("%d\n",num[1]);
    // printf("%d\n",num[2]);
    // printf("%d\n",num[3]);
    // printf("%d\n",num[4]);
    for (int i = 0; i <n; i++)
    {
         printf("%d\t",num[i]);
    }
    printf("\n");


    int sum=0;
    // sum=num[0]+num[1]+num[2]+num[3]+num[4];
    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    printf("sum=%d\n",sum);

    printf("avarage= %.2f",(float)sum/n);
    return 0;
}