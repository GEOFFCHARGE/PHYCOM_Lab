// Pre Exam 04: Blood Pressure

#include <stdio.h>

int main()
{
    int sbp, dbp;
    scanf("%d\n%d", &sbp, &dbp);
    (sbp <= 140 && dbp <= 90) ? printf("Normal") : printf("Hypertension");
    return 0;
}
