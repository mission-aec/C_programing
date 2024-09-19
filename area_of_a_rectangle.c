#include <stdio.h>
#include<math.h>
int main()
{   
   double lenth,width,area;
   printf("Enter your lenth & width: ");
   scanf("%lf %lf",&lenth,&width);
   area=lenth*width;
   printf("area= %.3lf",area);
    return 0;
}