#include <stdio.h>
int main()
{
    printf("CHECK YOU ARE PASS OR FAIL\n");

    // assinging variable and taking input
    int sci, math, eng;
    printf("Marks of Science: ");
    scanf("%d", &sci);

    printf("Marks of Mathematics: ");
    scanf("%d", &math);

    printf("Marks of English: ");
    scanf("%d", &eng);

    // applying logic
    if (sci >= 33 && math >= 33 && eng >= 33 && (sci + math + eng) / 3 >= 40)
    {
        printf("You are passed the examination.");
    }
    else
    {
        printf("You are not passed the examination.");
    }

    return 0;
}