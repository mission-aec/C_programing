#include<stdio.h>
int main()
{
    int matrix[3][3],trach=0;
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
        if (i==j)
        {
            trach+=matrix[i][j];
            //printf("trach= %d",trach);
        }
       }
       printf("\n");
    }
    printf("trach= %d",trach);

    return 0;
}