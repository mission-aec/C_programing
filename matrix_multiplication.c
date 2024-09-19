#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the row & colaum of a matrix 1: ");
    scanf("%d %d",&n1,&n2);
   

    int n3,n4;
    printf("Enter the row & colaum of a matrix 2: ");
    scanf("%d %d",&n3,&n4);
    
    
    while (n2!=n3)
    {
        printf("\nerror!multiplication is not posible.\n");

        printf("Enter the row & colaum of a matrix 1: ");
        scanf("%d %d",&n1,&n2);
        printf("Enter the row & colaum of a matrix 2: ");
        scanf("%d %d",&n3,&n4);
    }



    int m1[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
           printf("m1[%d][%d]= ",i,j);
           scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
    printf("m1[%d][%d]= ",n1,n2);
    for (int i = 0; i < n1; i++)
    {
        printf("\n");
        for (int j = 0; j < n2; j++)
        {
           printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }


            
     int m2[n3][n4];
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n4; j++)
        {
           printf("m2[%d][%d]= ",i,j);
           scanf("%d",&m2[i][j]);
        }
        printf("\n");
    }
    printf("m2[%d][%d]= ",n3,n4);
    for (int i = 0; i < n3; i++)
    {
        printf("\n");
        for (int j = 0; j < n4; j++)
        {
           printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }



    int sum=0,k;
    int result[n1][n4];
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
                for  (k = 0; k < n2; k++)
                {
                  sum=sum+m1[i][k]*m2[k][j];
                }
                result[i][j]=sum;
                sum=0; 
        }
        printf("\n");
    }
    printf("result[%d][%d]= ",n1,n4);
    for (int i = 0; i < n1; i++)
    {
        printf("\n");
        for (int j = 0; j < n4; j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
    }


 return 0;
}