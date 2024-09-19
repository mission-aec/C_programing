#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the number of rows and columes: ");
    scanf("%d",&n);

    for (row = 1; row<=n; row++)
    {
        for (col = 1; col <=n; col++)
            {
                if (row==n||col==1)
                {
                    printf(" * ");
                    //printf(" %d ",col);
                    //printf(" %d ",row);
                    //printf(" %d ",col%2);
                    //printf(" %d ",row%2);
                    //printf(" %c ",col+64);
                    //printf(" %c ",col+96);
                    //printf(" %c ",row+64);
                    //printf(" %c ",row+96);
                    //printf(" # ");
                }
                else if (col==row)
                {
                    printf(" * ");
                    //printf(" %d ",col);
                    //printf(" %d ",row);
                    //printf(" %d ",col%2);
                    //printf(" %d ",row%2);
                    //printf(" %c ",col+64);
                    //printf(" %c ",col+96);
                    //printf(" %c ",row+64);
                    //printf(" %c ",row+96);
                    //printf(" # ");
                }
                
                else
                {
                    printf("   ");
                }
                   
            }
    printf("\n");
    }
return 0;
}