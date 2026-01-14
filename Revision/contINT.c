
//Declare a const int variable with value 10. 
//Try to change its value to 20 in the next line. Explain what error the compiler gives and why.

#include <stdio.h>
int main()
{
    const int num = 10;

    num = 20;

    printf("num = %d", num);

    return 0;

    // error!
    /*
    contINT.c:10:9: error: assignment of read-only variable 'num'
     num = 20;
    */
}