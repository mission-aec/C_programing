#include<stdio.h>
#include<string.h>
int main()
{
    char sr1[20]="bangladash";
    char sr2[20]="india";
    char tamp[20];
    //before
    printf("%s\n",sr1);
    printf("%s\n",sr2);

    strcpy(tamp,sr1);
    strcpy(sr1,sr2);
    strcpy(sr2,tamp);
    //after
    printf("\n%s\n",sr1);
    printf("%s",sr2);
    return 0;
}