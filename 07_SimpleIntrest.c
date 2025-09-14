#include<stdio.h>
int main()
{
    //Program to calcate Simple Inrerest.
    int p_amount, r_intrest,time,intrest,total;

    printf("Enter the folloting details\n\n");

    printf("Principal Amount: ");
    scanf("%d",&p_amount);

    printf("Rate of Intrest: ");
    scanf("%d",&r_intrest);

    printf("Time period: ");
    scanf("%d",&time);

    //calculation of intrest
    intrest = (p_amount * r_intrest * time ) / 100;
    total = p_amount + intrest;

    // print result
    printf("\nIntrest to paid: %d", intrest);
    printf("\nTotal Amount to be paid: %d",total);

    return 0;


}