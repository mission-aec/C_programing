// //Write the output of the following code frugment.
// #include<stdio.h>
// int main()
// {
// int a=2;
// switch(a)
// { 
// printf("Message\n");
// default:
//  printf("Default\n");
// case 2:
// printf("Case-2\n");
// case 3:
//  printf("Case-3\n");
// }
// printf("Exit from switch\n");
// }








// #include <stdio.h>
//  int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     else {
//         return n * factorial(n - 1);
//     }
// }
// int main() {
//     int num;
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &num);
//     if (num < 0) {
//         printf("Factorial is not defined for negative integers.\n");
//     } else {
//         int result = factorial(num);
//         printf("Factorial of %d is %d\n", num, result);
//     }
//     return 0;
// }






#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    FILE *output = fopen("frequency.txt", "w");

    if (file == NULL || output == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char ch;
    int frequency[256] = {0};

    while ((ch = fgetc(file))!= EOF) {
        frequency[ch]++;
    }

    for (int i = 0; i < 256; i++) {
        if (frequency[i]!= 0) {
            fprintf(output, "Character '%c' occurs %d times.\n", i, frequency[i]);
        }
    }

    fclose(file);
    fclose(output);

    return 0;
}