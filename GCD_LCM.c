//GCD=greatest common divisor , LCM= least common multiple
#include<stdio.h>
int main()
{
   int num1,num2,remainder,n1,n2,gcd,lcm;
   printf("Enter the first number: ");
   scanf("%d",&num1);
   printf("Enter the second number: ");
   scanf("%d",&num2);
   n1 = num1;
   n2 = num2;

   while (n2!=0)
   {
   remainder=n1%n2;
   n1=n2;
   n2=remainder;
   }

   gcd=n1;    //gcd
   lcm=(num1*num2)/gcd;   //lcm
   printf("your GCD is= %d\n",gcd);
   printf("Your lcm is= %d\n",lcm);


return 0;
}