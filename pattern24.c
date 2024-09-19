#include<stdio.h>
int main()
{
    int n,row,col,count=0;
    //int count=1;
    printf("Enter the number of rows and columes: ");
    scanf("%d",&n);

    for (int row = 1; row <=n; row++)
    {
        for (int col = 1; col <=row; col++)
        {
           // printf(" %d ",count++);
            printf(" %d ",++count);
        }
        printf("\n");
    }
   return 0;
}