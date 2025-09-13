// Lab 10-11 Struct Find option

#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
    struct student_info student[21];
    for (int i = 0; i < 20; i++)
    {
        scanf(" %s %s %s %d %s %lf", student[i].name, student[i].surname, student[i].sex, &student[i].age, student[i].id, &student[i].gpa);
        (student[i].sex[0] == 'M') ? strcpy(student[i].sex, "Mr") : strcpy(student[i].sex, "Miss");
    }
    char sortCase[10];
    scanf(" %s", sortCase);
    for (int i = 0; i < 19; i++)
    {
        int sorted = 1;
        for (int j = 0; j < 19 - i; j++)
        {
            if ((tolower(sortCase[0]) == 'n' && strcmp(student[j].name, student[j + 1].name) > 0) ||
            (tolower(sortCase[0]) == 's' && strcmp(student[j].surname, student[j + 1].surname) > 0) ||
            (tolower(sortCase[0]) == 'i' && strcmp(student[j].id, student[j + 1].id) > 0))
            {
                student[20] = student[j];
                student[j] = student[j + 1];
                student[j + 1] = student[20];
                sorted = 0;
            }
        }
        if (sorted)
        {
            break;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%s %c %s (%d) ID: %s GPA %.2lf\n", student[i].sex, student[i].name[0], student[i].surname, student[i].age, student[i].id, student[i].gpa);
    }
    return 0;
}
