// Define a struct called Student with members int id and float cgpa.
// Create one student variable, assign values, and print them.

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
    struct student s1;
    strcpy(s1.name, "Ravi");
    s1.id = 42;
    s1.cgpa = 7.5;

    struct student s2;
    strcpy(s2.name, "Ranjan");
    s2.id = 43;
    s2.cgpa = 5.9;

    // print the deails
    printf("Details of Student 1\n");
    printf("Name::  %s.\n", s1.name);
    printf("ID::  %d.\n", s1.id);
    printf("cgpa::  %.2f.\n", s1.cgpa);

    printf("\n\nDetails of Student 2\n");
    printf("Name::  %s.\n", s2.name);
    printf("ID::  %d.\n", s2.id);
    printf("cgpa::  %.2f.\n", s2.cgpa);
    return 0;
}