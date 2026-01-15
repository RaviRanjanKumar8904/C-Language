//Write a program that asks for a user's full name (e.g., "Ravi Kumar"). 
//Use scanf first and observe why it stops after "Ravi".
// Then, fix it using fgets to read the full name including spaces.
#include <stdio.h>
int main()
{

    char name[20];
    printf("Enter Name: ");
    scanf("%s",&name);

    printf("Your name is %s\n",name);

    // from th above code if you type - ravi ranjan kumrar
    // it print only Ravi, it drop the word after space.

    // now using fgets
    while (getchar() != '\n');
    
    char name2[20];
    printf("\nEnter Name: ");
    fgets(name2,20,stdin);

    printf("Your name is %s",name2);


    return 0;
}