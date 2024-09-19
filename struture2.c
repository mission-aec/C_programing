#include<stdio.h>
//global struture
struct parson
{
   int age;
   float salary;
};
struct parson a,b;  //global variable
int main()
{
//local struture
struct parson
{
   int age;
   float salary;
};

  struct parson a,b;  //local variable
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
