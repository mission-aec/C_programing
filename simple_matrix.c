#include<stdio.h>
int main()
{
    int first[3][4];
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
       }
       printf("\n");
    }
    
    
    int second[3][4];
    printf("\nEnter the second matrix elements: \n");
    for (int i = 0; i < 3; i++)
    {  
       for (int j = 0; j < 4; j++)
       {
        printf("second[%d][%d]= ",i,j);
        scanf("%d",&second[i][j]);
       }
    printf("\n");   
    }

    printf("second matrix: \n");
    for (int i = 0; i < 3; i++)
    {  
       printf("\t");
       for (int j = 0; j < 4; j++)
       {
        printf("%d\t",second[i][j]);
       }
       printf("\n");
    }


    return 0;
}