// Lab 10-18 Struct Salary calculation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record
{
    char id[10];
    char name[100];
    long salary;
    long sales;
};

void findEmp(struct Record *emp, char *find, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!strcmp((emp + i)->id, find))
        {
            double com = (emp + i)->sales * 0.02;
            double all = (emp + i)->salary + com;
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", (emp + i)->id, (emp + i)->name, (emp + i)->sales, com, (emp + i)->salary, all);
            return;
        }
    }
    printf("ID not found !!!");
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Record *emp = malloc(n * sizeof(struct Record));
    for (int i = 0; i < n; i++)
    {
        scanf(" %s %s %ld %ld", (emp + i)->id, (emp + i)->name, &(emp + i)->salary, &(emp + i)->sales);
    }
    char find[10];
    scanf(" %s", find);
    findEmp(emp, find, n);
    free(emp);
    return 0;
}
