// Create an array of 3 Student structures.
// Use a loop to take input for all 3 students (ID, Name, CGPA) from the user and then
// print the details of the student with the highest CGPA.

#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    int id;
    float cgpa;
};

int main()
{

    struct student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Name of student %d: ", i + 1);
        scanf("%s", &s[i].name);

        printf("Id of student %d: ", i + 1);
        scanf("%d", &s[i].id);

        printf("cgpa of student %d: ", i + 1);
        scanf("%f", &s[i].cgpa);

        printf("\n\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nName of student %d = %s", i + 1, s[i].name);

        printf("\nId of student %d = %d", i + 1, s[i].id);

        printf("\ncgpa of student %d = %.3f", i + 1, s[i].cgpa);

        printf("\n\n");
    }

    return 0;
}
