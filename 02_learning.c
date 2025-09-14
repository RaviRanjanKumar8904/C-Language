#include <stdio.h>
int main()
{

    // Variable is a container to store values.
    printf("RULES OF DECLEARING VARIABLE\n\n");

    printf("Variable name must start with alphabet\n");
    printf("Special Character is not allowed except Underscore(_)\n");
    printf("No Blank space is allowed.\n");
    printf("It is case sensetive\n");
    printf("We should Give meaningfull and readable variable\n");

    printf("\n\n\n");

    // Data Types.
    printf("DATA TYPES\n\n");

    int a = 1;
    printf("Size of int is %d", sizeof(a));
    //%d for integer input/output

    float b = 1.1;
    printf("\nsize of float is %d", sizeof(b));
    //%f for float input/output

    char c = 'k';
    printf("\nSize of char is %d", sizeof(c));
    //%c for character input/output

    return 0;
}