#include<stdio.h>

//function
float fah(float c)
{
    int output = (c * 1.8) + 32;
    return output;
}

int main()
{
    float celsius;
    printf("Celsius = ");
    scanf("%f",&celsius);

    float Fahrenhiet = fah(celsius);
    printf("\n%.2f degree celsius = %.2f degree fahrenhiet",celsius, Fahrenhiet);
    return 0;
}