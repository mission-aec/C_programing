//1+2+3+......+n
/*#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the last number: ");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++)
    {
        printf(" %d ",i);
        sum+=i;
    }
    printf("\n1+2+3+....+%d=%d\n",n,sum);


    return 0;
}*/



//1+3+5+......+n
/*#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the last number: ");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i+=2)
    {
         printf(" %d ",i);
        sum+=i;
    }
    printf("\n1+3+5+....+%d=%d\n",n,sum);


    return 0;
}*/



//1+3+5+......+n
/*#include<stdio.h>
int main()
{
    int n,sum=0,a=1;
    printf("enter the last number: ");
    scanf("%d",&n);
    
    while (a<=n)
    {
         printf(" %d ",a);
       sum+=a;
       a+=2;
    }
    
    printf("\n1+3+5+....+%d=%d\n",n,sum);


    return 0;
}*/




//1+2+3+......+n
/*#include<stdio.h>
int main()
{
    int n,sum=0,a=1;
    printf("enter the last number: ");
    scanf("%d",&n);
    
    while (a<=n)
    {
         printf(" %d ",a);
        sum+=a;
        a++;
    }
    
    printf("\n1+2+3+....+%d=%d\n",n,sum);


    return 0;
}*/



//2+4+6+.....+n=?
/*#include<stdio.h>
int main()
{
    int n,sum=0,a=2;
    printf("enter the last number: ");
    scanf("%d",&n);
    
    while (a<=n)
    {
         printf(" %d ",a);
        sum+=a;
        a+=2;
    }
    
    printf("\n2+4+6+....+%d=%d\n",n,sum);


    return 0;
}*/



//1*2+2*3+3*4+....+n1*n2=?
/*#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("enter n1 &n2: ");
    scanf("%d %d",&n1,&n2);
    while (a<=n1 && b<=n2)
    {
         printf(" %d*%d ",a,b);
        sum+=(a*b);
        a++;
        b++;
    }
    printf("\n1*2+2*3+3*4+....+%d*%d= %d\n",n1,n2,sum);
    return 0;

}*/


//1*3+2*5+3*7+....+n1*n2=?
/*#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=3;
    printf("enter n1 &n2: ");
    scanf("%d %d",&n1,&n2);
    while (a<=n1 && b<=n2)
    {
        printf(" %d*%d ",a,b);
        sum+=(a*b);
        a++;
        b+=2;
    }
    printf("\n1*3+2*5+3*7+....+%d*%d= %d\n",n1,n2,sum);
    return 0;

}*/



//1*3*4+2*5*6+3*7*8+....+n1*n2*n3=?
/*#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,a=1,b=3,c=4;
    printf("enter n1 &n2& n3: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    while (a<=n1 && b<=n2 && c<=n3)
    {
        printf(" %d*%d*%d ",a,b,c);
        sum+=(a*b*c);
        a++;
        b+=2;
        c+=2;
    }
    printf("\n1*3*4+2*5*6+3*7*8+....+%d*%d*%d= %d\n",n1,n2,n3,sum);
    return 0;

}*/

//1.5+2.5+3.5+......+n
/*#include<stdio.h>
int main()
{
    float n,sum=0;
    printf("enter the last number: ");
    scanf("%f",&n);
    
    for (float i = 1.5; i <=n; i++)
    {
        printf(" %.1f ",i);
        sum+=i;
    }
    printf("\n1.5+2.5+3.5+....+%.1f=%.1f\n",n,sum);


    return 0;
}*/


//1^2+2^2+3^2+.....+n^2= ? 
/*#include<stdio.h>
#include<math.h>
int main()
{
    int number,sum=0;
    printf("enter your sequence number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        printf(" %d^2+ ",i);
        sum = (i*i)+sum;
    }

    printf("\n1^2+2^2+3^2+.....+n^2= %d ",sum);
    return 0;
}*/


//1+1/2+1/3+1/4+....+1/n=?
/*#include<stdio.h>   
int main()
{
    double n,sum=0;
    printf("enter your last number : ");
    scanf("%lf",&n);
    for (double i = 1; i <=n; i++)
    {
        sum=sum+((double)1/i);
    }
    printf("1+1/2+1/3+1/4+....+1/%.1lf = %lf\n ",n,sum);
    return 0;

}*/



//1+1/3+1/5+1/7+....+1/n=?
/*#include<stdio.h>   
int main()
{
    double n,sum=0;
    printf("enter your last number : ");
    scanf("%lf",&n);
    for (double i = 1; i <=n; i+=2)
    {
        sum=sum+((double)1/i);
    }
    printf("1+1/3+1/5+1/7+....+1/%.1lf = %lf\n ",n,sum);
    return 0;

}*/



//1/2+1/4+1/6+....+1/n=?
/*#include<stdio.h>   
int main()
{
    double n,sum=0;
    printf("enter your last number : ");
    scanf("%lf",&n);
    for (double i = 2; i <=n; i+=2)
    {
        sum=sum+((double)1/i);
    }
    printf("1/2+1/4+1/6+....+1/%.1lf = %lf\n ",n,sum);
    return 0;

}*/


//1*2*3*....*n=?
/*#include<stdio.h>   
int main()
{
    int n,result=1;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        result=result*i;
    }
    printf("1*2*3*....*%d = %d\n ",n,result);
    return 0;

}*/



//1^2*2^2*3^2*....*n^2=?
/*#include<stdio.h>   
int main()
{
    int n,result=1;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        result=result*i*i;
    }
    printf("1^2*2^2*3^2*....*%d^2 = %d\n ",n,result);
    return 0;

}*/





//2*4*6....*n=?
/*#include<stdio.h>   
int main()
{
    int n,result=1;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 2; i <=n; i+=2)
    {
        result=result*i;
    }
    printf("2*4*6....*%d = %d\n ",n,result);
    return 0;

}*/



//2^2*4^2*6^2....*n^2=?
/*#include<stdio.h>   
int main()
{
    int n,result=1;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 2; i <=n; i+=2)
    {
        result=result*i*i;
    }
    printf("2^2*4^2*6^2....*%d^2 = %d\n ",n,result);
    return 0;

}*/



//1*3*5....*n=?
/*#include<stdio.h>   
int main()
{
    int n,result=1;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i+=2)
    {
        result=result*i;
    }
    printf("1*3*5*....*%d = %d\n ",n,result);
    return 0;

}*/


//1^2*3^2*5^2....*n^2=?
/*#include<stdio.h>   
int main()
{
    int n,result=1;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i+=2)
    {
        result=result*i*i;
    }
    printf("1^2*3^2*5^2*....*%d^2 = %d\n ",n,result);
    return 0;

}*/



//1-2+3-4+5-6+......n
//(1+3+5+.....)-(2+4+6+.....)
#include<stdio.h>
int main()
{
    int n,sum=0,odd=0,even=0;
    printf("enter your last number : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if(i%2==0)
        {
            even+=i;
        }
        else
        {
            odd+=i;
        }
    }
    printf("1-2+3-4+5-6+......%d=%d\n",n,odd-even);

    return 0;
}
