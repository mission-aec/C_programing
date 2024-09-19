#include <stdio.h>
//#include <stdio.h>
int main()
{
int a[2][2]={{1,2},{3,4}};  
int sum=0;
printf("your matrix: 22\n");
for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" %d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("totel sum: %d",sum);
   return 0;
}

