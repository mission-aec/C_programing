//chack a number prime r not 

/*#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int number,count=0;
    printf("Enter any number: ");
    scanf("%d",&number);
    if (number<=1)
    {
        //count++;
        count=1;
    }
    else
    {
    
            //for (int i = 2; i <number; i++)
           //for (int i = 2; i <number/2; i++)
           //for (int i = 2; i <=number/2; i++)
            for (int i = 2; i <=sqrt(number); i++)
                        {
                        if (number%i==0)
                        {
                            //count++;
                            count=1;
                            break;
                        }
                        
                        }
    }
    if (count==0)
    {
       printf("%d is a prime number\n",number);
    }
    else
    {
        printf("%d is not a prime number\n",number);
    }
    
    
    return 0;
}*/


//print prime number from 1 to 100

/*#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int number,count=0;
    printf("prime number: \n");
    for (number= 0; number<=100; number++)
    {
        count=0;
                if (number<=1)
            {
                //count++;
                count=1;
            }
            else
            {
            
                    //for (int i = 2; i <number; i++)
                //for (int i = 2; i <number/2; i++)
                //for (int i = 2; i <=number/2; i++)
                    for (int i = 2; i <=sqrt(number); i++)
                                {
                                if (number%i==0)
                                {
                                    //count++;
                                    count=1;
                                    break;
                                }
                                
                                }
            }
            if (count==0)
            {
            printf("%d\n",number);
            }
    }
    
    return 0;
}*/


//print and count prime number from 1 to 100

/*#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int number,count=0,number_of_prime_number=0;
    printf("prime number: \n");
    for (number= 0; number<=100; number++)
    {
        count=0;
                if (number<=1)
            {
                //count++;
                count=1;
            }
            else
            {
            
                    //for (int i = 2; i <number; i++)
                //for (int i = 2; i <number/2; i++)
                //for (int i = 2; i <=number/2; i++)
                    for (int i = 2; i <=sqrt(number); i++)
                                {
                                if (number%i==0)
                                {
                                    //count++;
                                    count=1;
                                    break;
                                }
                                
                                }
            }
            if (count==0)
            {
            printf("%d\n",number);
            //number_of_prime_number++;
            number_of_prime_number = number_of_prime_number+1;
            }
    }
    printf("Total prime number: %d\n",number_of_prime_number);
    
    return 0;
}*/


//print,sum of prime number and count prime number from 1 to 100

/*#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int number,count=0,number_of_prime_number=0,sum=0;
    printf("prime number: \n");
    for (number= 0; number<=100; number++)
    {
        count=0;
                if (number<=1)
            {
                //count++;
                count=1;
            }
            else
            {
            
                    //for (int i = 2; i <number; i++)
                //for (int i = 2; i <number/2; i++)
                //for (int i = 2; i <=number/2; i++)
                    for (int i = 2; i <=sqrt(number); i++)
                                {
                                if (number%i==0)
                                {
                                    //count++;
                                    count=1;
                                    break;
                                }
                                
                                }
            }
            if (count==0)
            {
            printf("%d\n",number);
            //number_of_prime_number++;
            number_of_prime_number = number_of_prime_number+1;
            sum=sum+number;
            }
    }
    printf("Total prime number: %d\n",number_of_prime_number);
    printf("sum of totel prime number: %d\n",sum);

    
    return 0;
}*/


//print,sum of prime number and count prime number from 'x' to 'y'

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int x,y;
    printf("Enter your start number: ");
    scanf("%d",&x);
    printf("Enter your end number: ");
    scanf("%d",&y);
    int number,count=0,number_of_prime_number=0,sum=0;
    printf("prime number: \n");
    for (number= x; number<=y; number++)
    {
        count=0;
                if (number<=1)
            {
                //count++;
                count=1;
            }
            else
            {
            
                //for (int i = 2; i <number; i++)
                //for (int i = 2; i <number/2; i++)
                //for (int i = 2; i <=number/2; i++)
                for (int i = 2; i <=sqrt(number); i++)
                                {
                                if (number%i==0)
                                {
                                    //count++;
                                    count=1;
                                    break;
                                }
                                
                                }
            }
            if (count==0)
            {
            printf("%d\n",number);
            //number_of_prime_number++;
            number_of_prime_number = number_of_prime_number+1;
            sum=sum+number;
            }
    }
    printf("Total prime number: %d\n",number_of_prime_number);
    printf("sum of totel prime number: %d\n",sum);

    
    return 0;
}


