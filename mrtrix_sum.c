#include<stdio.h>
int main()
{
   //int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int a[3][3];
   int b[3][3];
   int c[3][3];
   //int sum=0;
   printf("Enter your first matrix: \n");
   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nyour matrix: 3*3\n");

    printf("Enter your sound matrix: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nyour matrix: 3*3\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           c[i][j]= a[i][j]+ b[i][j] ;
        }
    }

    printf("\nc matrix: \n");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
   /*printf("your matrix:");
    printf(" %d ",a[0][0]);
    printf(" %d ",a[0][1]);
    printf(" %d \n",a[0][2]);
     printf("             %d ",a[1][0]);
     printf(" %d ",a[1][1]);
     printf(" %d \n",a[1][2]);
      printf("             %d ",a[2][0]);
      printf(" %d ",a[2][1]);
      printf(" %d \n",a[2][2]);*/
    /*for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("totel sum: %d",sum);*/
   return 0;
}
