#include<stdio.h>
//global struture
struct parson
{
   int age;
   float salary;
};

int main()
{
int i;
  struct parson a[4];
  for (i = 0; i < 4; i++)
  {
   printf("enter data for parson %d: \n",(i+1));
   printf("enter age: ");
   scanf("%d",&a[i].age);
  
   printf("enter salary: ");
   scanf("%f",&a[i].salary);
  
  }
  for (i = 0; i < 4; i++)
  {
   printf("\ndata for parson %d: \n",(i+1));
   printf("enter age: %d\n",a[i].age);
   printf("enter salary: %f\n",a[i].salary);
  }
  
  
 
  return 0;
}
