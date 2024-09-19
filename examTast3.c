// #include<stdio.h>
// int main()
// {
// int x,y;
// int *ptr;
// x=100;
// ptr=&x;
// y=*ptr;
// printf("%d\n",y);
// }
#include <stdio.h>
int main() {
    int number = 1;
    int sumEven = 0;
    int sumOdd = 0;
    // for (number=1;number<=50;number++)
    // {
    //     if (number % 2 == 0) {
    //         sumEven += number;
    //     } else {
    //         sumOdd += number;
    //     }
    // }
    //  do {
    //     if (number % 2 == 0) {
    //         sumEven += number;
    //     } else {
    //         sumOdd += number;
    //     }
    //     number++;
    // } while (number <= 50);
    
    while (number<=50)
    {
         if (number % 2 == 0) {
            sumEven += number;
        } else {
            sumOdd += number;
        }
        number++;
    }
    
    printf("Sum of even numbers from 1 to 50: %d\n", sumEven);
    printf("Sum of odd numbers from 1 to 50: %d\n", sumOdd);
    return 0;
}
