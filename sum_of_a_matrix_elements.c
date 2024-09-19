#include<stdio.h>
int main()
{
    int first[3][4],sum=0;
    printf("Enter the first matrix elements: \n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 4; j++)
       {
        printf("first[%d][%d]= ",i,j);
        scanf("%d",&first[i][j]);
       }
       printf("\n");   
    }
    printf("first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t");
       for (int j = 0; j < 4; j++)
       {
        printf("%d\t",first[i][j]);
        sum+=first[i][j];
       }
       printf("\n");
    }
    printf("sum of matrix elements= %d",sum);
    
    


    return 0;
}