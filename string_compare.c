#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100] = "mission";
    char s2[100] = "mission";

    if (strcmp(s1, s2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    return 0;

}
