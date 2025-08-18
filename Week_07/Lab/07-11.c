// [Extra ไม่มีคะแนน] Spotify ( Easy )

#include <stdio.h>
#include <string.h>

int main() {
    int totalSecond;
    long int totalMinute, queueSecond = 0;
    scanf("%ld.%d", &totalMinute, &totalSecond);
    long int totalTiming = totalMinute * 60 + totalSecond;
    int queueLength;
    scanf("%d", &queueLength);
    int musicNumber[queueLength], musicLength[queueLength];
    char musicNaming[queueLength][52];
    for (int i = 0; i < queueLength; i++) {
        int queue, minute, second;
        char names[52];
        scanf(" Queue#%d <|> %[^<] <|> %d.%d", &queue, &names, &minute, &second);
        musicNumber[queue - 1] = queue;
        strcpy(musicNaming[queue - 1], names);
        musicLength[queue - 1] = minute * 60 + second;
        queueSecond += musicLength[queue - 1];
    }
    totalTiming %= queueSecond;
    if (totalTiming == 0) {
        totalTiming = queueSecond;
    }
    long int currentings = 0;
    for (int i = 0; i < queueLength; i++) {
        currentings += musicLength[i];
        if (currentings >= totalTiming) {
            printf("Song Order: %d\n", musicNumber[i]);
            printf("Song Name: %s\n", musicNaming[i]);
            long int processings = totalTiming - (currentings - musicLength[i]);
            int percentages = (int) ((double) processings / musicLength[i] * 100);
            if (percentages == 0) {
                percentages = 1;
            }
            if (percentages == 100) {
                printf("Song Process: Complete\n");
            }
            else {
                printf("Song Process: %d%%\n", percentages);
            }
            break;
        }
    }
    return 0;
}