#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the number of rows and columes: ");
    scanf("%d",&n);

    for (int row = 1; row <=n; row++)
    {
        for (int col = 1; col <=row; col++)
        {
            //printf(" %c ",col+64);
            printf(" %c ",col+96);
        }
        printf("\n");
    }
   return 0;
}