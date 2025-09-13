// Lab 10-10 Struct Info Book

#include <stdio.h>

struct student_info
{
    char name[60];
    char surname[60];
    char sex[6];
    int age;
    char id[12];
    double gpa;
};

int main()
{
    struct student_info student;
    scanf(" %s %s %s %d %s %lf", student.name, student.surname, student.sex, &student.age, student.id, &student.gpa);
    printf("%s %c %s (%d) ID: %s GPA %.2lf", (student.sex[0] == 'M') ? "Mr" : "Miss", student.name[0], student.surname, student.age, student.id, student.gpa);
    return 0;
}
