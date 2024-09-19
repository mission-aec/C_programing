#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()

{
int a;
cout<<"In this code ,if you enter your subject marks, it will show your grade and CGPA. "
"You should try this one."<<endl;
cout<<"\nPlease enter your exam marks: ";
cin>>a;
if(94>=a && a>79)
{
cout<<"You have got A+ and your CGPA is 4.00"<<endl;
}

else if(80>a && a>74)
{
cout<<"You have got A and your CGPA is 3.75"<<endl;
}
else if(75>a && 69<a)
{
cout<<"You have got A- and your CGPA is 3.50";
}
else if(70>a && a>64)
{
cout<<"You have got B+ and your CGPA is 3.25";
}
else if(65>a && a>59)
{
cout<<"You have got B and your CGPA is 3.00";
}
else if(60>a && a>54)
{
cout<<"You have got B- and your CGPA is 2.75";
}
else if(55>a && a>49)
{
cout<<"You have got C+ and your CGPA is 2.50";
}
else if(50>a && a>44)
{
cout<<"You have got B and your CGPA is 2.25";
}
else if(45>a && a>39)
{
cout<<"You have got D and your CGPA is 2.00";
}
else if(40>a && a>=0)
{
cout<<"I am sorry. You have failed and your CGPA is 0.00 :(";
}
else if (a<=100 && a>=95)
{
cout<<"Suberb man! you are fuking genius. You have got stand marks "<<a<< " out of 100 and your CGPA is 4.00";
}

else
{
cout<<"You have input a wrong value";
}


getch();
}