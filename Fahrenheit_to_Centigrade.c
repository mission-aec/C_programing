#include <stdio.h>
#include<math.h>
int main()
{   
    float c,f;
    printf("enter fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("cantigrade: %f\n",c);
    return 0;
}