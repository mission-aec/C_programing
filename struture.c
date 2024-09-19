#include<stdio.h>
//global struture
struct parson
{
   int age;
   float salary;
};

int main()
{
  struct parson a,b;
  a.age=20;
  a.salary=500;
  b.age=30;
  b.salary=6666.666;
  printf("%d\n",a.age);
  printf("%f\n",a.salary);
  printf("%d\n",b.age);
  printf("%f\n",b.salary);
  return 0;
}
