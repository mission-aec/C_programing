#include <stdio.h>
#include<math.h>
int main()
{   
    //How to swap two numbers with temporary variable
    /*int num1=10;
    int num2=5;
    int tamp;
    tamp=num1;  //tamp=10
    num1=num2;  //num1=5
    num2=tamp;  //num2=10
    printf("num1= %d\n",num1);
    printf("num2= %d\n",num2);  */

    //How to swap two numbers without temporary variable
    int num1=10;
    int num2=5;
    num1=num1-num2;   //num1=5
    num2=num1+num2;   //num2=10
    num1=num2-num1;   //num1=5

   
    printf("num1= %d\n",num1);
    printf("num2= %d\n",num2);
    return 0;
}