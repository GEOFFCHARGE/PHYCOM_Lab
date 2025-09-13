// Quiz 07-02: Who is faster? V2 (Part 2)

#include <stdio.h>
#include <string.h>

int sum7(int daily_minutes[7]) {
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += daily_minutes[i];
    }
    return sum;
}

int fast(int timing[person]) {
    int f = 0;
    for (int i = 0; i < person; i++) {
        if (timing[i] > f) {
            f = i;
        }
    }
    return f;
}

int slow(int timing[person]) {
    int s = 999999;
    for (int i = 0; i < person; i++) {
        if (timing[i] < s) {
            s = i;
        }
    }
    return s;
}

int main() {
    int person;
    scanf("%d", &person);
    int timing[person];
    char namcar[person][51]; 
    for (int i = 0; i < person; i++) {
        int days[7];
        char name[51];
        scanf(" %[^\n]\n", &name);
        for (int j = 0; j < 7; j++) {
            scanf("%d", &days[j]);
        }
        timing[i] = sum7(days);
        strcpy(namcar[i], name);
    }
    for (int i = 0; i < person; i++) {
        printf("%s: %d minutes, average %d minutes/day\n", namcar[i], timing[i], timing[i] / 7);
        printf("===\n");
        int f = fast(timing);
        int s = slow(timing);
        printf("Fastest: %s: %d minutes, average %d minutes/day\n", namcar[f], timing[f], timing[f] / 7)
        printf("Slowest: %s: %d minutes, average %d minutes/day", namcar[s], timing[s], timing[s] / 7)
    }
}