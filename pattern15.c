#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the number of rows and columes: ");
    scanf("%d",&n);

    for (int row = 1; row<=n; row++)
    {
        //space printing
        for (int col = 1; col <=(n-row); col++)
        {
            printf(" ");
        }
            //print the number 
             for (int col = 1; col <=((2*row)-1); col++)
                {
                    printf("*");
                    //printf("%d",col);
                    //printf("%d",row);
                    //printf("%d",col%2);
                    //printf("%d",row%2);
                    //printf("%c",col+64);
                    //printf("%c",col+96);
                    //printf("%c",row+64);
                    //printf("%c",row+96);
                    //printf("#");
                }
    printf("\n");
    }
return 0;
}