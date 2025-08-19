// [Extra ไม่มีคะแนน] Spotify ( Easy )

#include <stdio.h>
#include <string.h>

int main()
{
    int totalSecond;
    long int totalMinute, totalTiming, queueSecond = 0, totalCurent = 0;
    scanf("%ld.%d", &totalMinute, &totalSecond);
	int queueLength;
    scanf("%d", &queueLength);
    totalTiming = totalMinute * 60 + totalSecond;
    int musicNumber[queueLength], musicLength[queueLength];
    char musicNaming[queueLength][50];
    for (int i = 0; i < queueLength; i++)
    {
        int queue, minute, second;
        char names[50];
        scanf(" Queue#%d <|> %[^<] <|> %d.%d", &queue, &names, &minute, &second);
        musicNumber[queue - 1] = queue;
        strcpy(musicNaming[queue - 1], names);
        musicLength[queue - 1] = minute * 60 + second;
        queueSecond += musicLength[queue - 1];
    }
    totalTiming %= queueSecond;
    if (totalTiming == 0)
    {
        totalTiming = queueSecond;
    }
    for (int i = 0; i < queueLength; i++)
    {
        totalCurent += musicLength[i];
        if (totalCurent >= totalTiming)
        {
            int percent;
            long int process;
            printf("Song Order: %d\n", musicNumber[i]);
            printf("Song Name: %s\n", musicNaming[i]);
            process = totalTiming - (totalCurent - musicLength[i]);
            percent = (int) ((double) process / musicLength[i] * 100);
            if (percent == 0)
            {
                percent = 1;
            }
            if (percent == 100)
            {
                printf("Song Process: Complete\n");
            }
            else
            {
                printf("Song Process: %d%%\n", percent);
            }
            break;
        }
    }
    return 0;
}
