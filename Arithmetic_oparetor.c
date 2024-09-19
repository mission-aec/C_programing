//Arithmetic opatetor 
#include<stdio.h>
int main()
{
   int num1,num2,rusalts;
   float avg; 
   printf("Enter your first num: ");
   scanf("%d",&num1);
   fflush(stdin);
   printf("Enrer your second num: ");
   scanf("%d",&num2);
   fflush(stdin);
   
   rusalts=num1+num2; //sum
   printf("your totel sum: %d\n",rusalts);
  
   rusalts=num1*num2;  //mul
   printf("your totel mul: %d\n",rusalts);
  
   rusalts=num1/num2;   //div
   printf("your totel div: %d\n",rusalts);
   
   rusalts=num1%num2;    //modulas
   printf("your totel remainder: %d\n",rusalts);
  
   rusalts=num1-num2;    //sub
   printf("your totel sub: %d\n",rusalts);
  
   //avg=(num1=num2)/2;
   avg=(float)(num1=num2)/2;   // type castin
   printf("your avarage: %.2f",avg);
   
    return 0;
}