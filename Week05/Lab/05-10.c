// Lab 05-10 IT Business

#include <stdio.h>

int main()
{
    int scam = 0, stat;
    float owns = 0.0, acct = 0.0, cash;
    scanf("%f\n%f", &acct, &owns);
    while (scam < 3 && stat != 'E')
    {
        scanf(" %c %f", &stat, &cash);
        if (stat == 'D' && owns >= cash)
        {
            owns -= cash;
            acct += cash;
            scam = 0;
        }
        else if (stat == 'W' && acct >= cash)
        {
            acct -= cash;
            owns += cash;
            scam = 0;
        }
        else
        {
            scam++;
        }
    }
    printf("%.2f\n%.2f", acct, owns);
    return 0;
}
