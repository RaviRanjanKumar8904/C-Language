#include<stdio.h>
int main()
{
    int n;
    printf("Add Natural Number Upto: ");
    scanf("%d",&n);
    printf("Sum of First %d Natural Number is : ",n);
    //logic
    int sum = 0;
    while(n >= 1)
    {
        sum += n;
        n--;
    }
    printf("%d",sum);

    return 0;

    
}