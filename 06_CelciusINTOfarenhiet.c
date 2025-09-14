#include<stdio.h>
int main()
{
    // program to convert celcius into fehrenhiet.
    float celcius;
    printf("Enter the Temperature in Celcius: ");
    scanf("%f", &celcius);

    float fehrenhiet = (celcius * 1.8) + 32; //... calcualtion

    printf("%.2f degree celcius is %.2f degree in farehhiet.",celcius,fehrenhiet);

    return 0;
}