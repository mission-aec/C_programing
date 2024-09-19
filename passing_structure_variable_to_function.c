#include<stdio.h>
//global struture
struct parson
{
   char name[50000];
   int age;
   float salary;
};
void display(struct parson x) 
{
   printf("\ndata for parson: \n");
   printf("name: %s\n",x.name);
   printf("enter age: %d\n",x.age);
   printf("enter salary: %f\n",x.salary);
}

int main()
{
  int i;
  struct parson a;
  
  
   printf("\nenter data for parson: \n");
   
   //a.name="mission";     //error
   //strcpy(a.name,"mission");     
   printf("enter name: ");
   fflush(stdin);
   gets(a.name);

   printf("enter age: ");
   scanf("%d",&a.age);
  
   printf("enter salary: ");
   scanf("%f",&a.salary);

   display(a);

  return 0;
}
