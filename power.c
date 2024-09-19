
//libaray function pow(x,y)=x^y   
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    int result;
    printf("enter your number: ");
    scanf("%d",&x);
    printf("enter your power: ");
    scanf("%d",&y);
    // x=5;
    // y=3;
    result=pow(x,y);
    printf("your result= %d\n",result);
    return 0;
}
// #include <stdio.h>
// #include<math.h>
// int main(){
//     int m=5,x;
//     x=pow(m,3);
//     int *pnt=&x;
//     printf("%d",*pnt);
//     return 0;

// }