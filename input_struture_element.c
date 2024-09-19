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
  printf("enter data for first parson: \n");
  printf("enter age: \n");
  scanf("%d",&a.age);
  printf("emter salary: \n");
  scanf("%f",&a.salary);
  printf("age= %d\n",a.age);
  printf("salary= %f\n",a.salary);




  printf("\n\nenter data for second parson: \n");
  printf("enter age: \n");
  scanf("%d",&b.age);
  printf("emter salary: \n");
  scanf("%f",&b.salary);
  printf("age= %d\n",b.age);
  printf("salary= %f\n",b.salary);

  return 0;
}
