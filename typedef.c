#include<stdio.h>
struct book
{
   char name[20];
   int price;
};

int main()
{
    // typedef char letter;
    // letter ch='a';
    // printf("%c\n",ch);

    // letter ch1='s';
    // printf("%c\n",ch1);

    typedef struct book Book;
    Book b={"mission",455};
    printf("book name: %s\n",b.name);
    printf("price: %d\n",b.price);
    
    return 0;
}