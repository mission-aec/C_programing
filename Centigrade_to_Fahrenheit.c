#include <stdio.h>
#include<math.h>
int main()
{   
    float c,f;
    printf("enter cantigrade: ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("fahrenheit: %f\n",f);
    return 0;
}