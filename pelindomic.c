//function calling

/*#include<stdio.h>
#include<math.h>

void isPalindrome(int num)
{
    int originalNum, remainder, reversedNum = 0;
    originalNum = num;   //originalnum=101

    while (num > 0) 
    {
        remainder = num % 10;   //remainder=101%10
        reversedNum = reversedNum * 10 + remainder;     //reversednum=0*10+1
        num /= 10; //num=num/10
    }

        if (originalNum == reversedNum) 
        {
            printf("%d is Palindrome. ",originalNum);
        }
        else
        {
        printf(" %d is not Palindrome. ",originalNum);
        }
 
      

}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);    //num =101

     isPalindrome(num);
    
 return 0;
}*/


//pailndrome number calling function

/*#include<stdio.h>
#include<math.h>

int isPalindrome(int num)
{
    int originalNum, remainder, reversedNum = 0;
    originalNum = num;   //originalnum=101

    while (num > 0) 
    {
        remainder = num % 10;   //remainder=101%10
        reversedNum = reversedNum * 10 + remainder;     //reversednum=0*10+1
        num /= 10; //num=num/10
    }

        if (originalNum == reversedNum) 
        {
            return 1;
        } 
        else 
        {
            return 2;
        }


}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);    //num =101

    int t = isPalindrome(num);
    if(t==1)
    {
        printf("%d is Palindrome. ",num);
    }
    else
    {
        printf("%d is not Palindrome. ",num);
    }

    
return 0;
}*/


//palindrom number not calling function

#include <stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int main() {

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int originalNum, remainder, reversedNum = 0;
   
    num=abs(num);
    originalNum = num;
    while (num > 0) 
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

        if (originalNum == reversedNum) 
        {
            printf("%d is a palindrome.\n", originalNum);
        } 
        else 
        {
            printf("%d is not a palindrome.\n", originalNum);
        }

    return 0;
}