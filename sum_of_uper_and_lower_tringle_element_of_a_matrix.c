#include<stdio.h>
int main()
{
    int matrix[3][3],sumOfUper=0,sumOflower=0;
    printf("Enter the matrix elements: \n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        printf("matrix[%d][%d]= ",i,j);
        scanf("%d",&matrix[i][j]);
       }
       printf("\n");   
    }
    printf("the matrix= \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t");
       for (int j = 0; j < 3; j++)
       {
        printf("%d\t",matrix[i][j]);
        if (i<j)
        {
           sumOfUper+=matrix[i][j];
        }
         if (i>j)
        {
           sumOflower+=matrix[i][j];
        }
       }
       printf("\n");
    }
    printf("sum of uper tringel= %d\n",sumOfUper);
    printf("sum of lower tringel= %d\n",sumOflower);

    return 0;
}