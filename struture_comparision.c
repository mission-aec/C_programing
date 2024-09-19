#include<stdio.h>
//global struture
struct parson
{
   int age;
   float salary;
};

int main()
{
  struct parson a,b,c;
  a.age=20;
  a.salary=500;
  b.age=30;
  b.salary=6666.666;
  c=b;
  if (c.age==b.age&&c.salary==b.salary)
  {
   printf("a=b");
  }
  else
  {
    printf("a!=b");
  }
  
  
  return 0;
}
