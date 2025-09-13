//  Quiz 06-01 Who is faster?

#include <stdio.h>

int main() {
    int tae1time[7], tae2time[7], tae1sum = 0, tae2sum = 0, tae1fast = 0, tae2fast = 0, samefast = 0;
    char tae1name[12], tae2name[12];
    scanf(" %[^\n] ", &tae1name);
    for (int i = 0; i < 7; i++) {
        scanf("%d", &tae1time[i]);
    }
    scanf(" %[^\n] ", &tae2name);
    for (int i = 0; i < 7; i++) {
        scanf("%d", &tae2time[i]);
    }
    for (int i = 0; i < 7; i++) {
        tae1sum += tae1time[i];
        tae2sum += tae2time[i];
        if (tae1time[i] < tae2time[i]) {
            tae1fast++;
        }
        else if (tae1time[i] > tae2time[i]) {
            tae2fast++;
        }
        else {
            samefast++;
        }
    }
    printf("%s: %d minutes, average %d minutes/day\n", tae1name, tae1sum, tae1sum / 7);
    printf("%s: %d minutes, average %d minutes/day\n", tae2name, tae2sum, tae2sum / 7);
    printf("Faster days - %s: %d, %s: %d, Equal: %d" , tae1name, tae1fast, tae2name, tae2fast, samefast);
    return 0;
}
