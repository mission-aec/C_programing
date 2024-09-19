#include<stdio.h>
//global struture
struct parson
{
   int age;
   float salary;
};

int main()
{
  struct parson a={27,500},b={50,566666};
  
  printf("%d\n",a.age);
  printf("%f\n",a.salary);
  printf("%d\n",b.age);
  printf("%f\n",b.salary);
  return 0;
}
