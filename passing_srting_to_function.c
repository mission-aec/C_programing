#include <stdio.h>

// Function that takes a string as an argument
void print_string( char str[]) 
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c\n",str[i]);
        i++;
    }
    printf("The string is: %s\n", str);
}

int main() {
    // Define a string
    char str[] = "Hello World!";

    // Pass the string to the function
    print_string(str);

    return 0;
}