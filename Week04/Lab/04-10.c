// Lab 04-10 Debaratna Road

#include <stdio.h>

int main()
{
    double milestone;
    scanf("%lf", &milestone);
    if (milestone >= 0 && milestone <= 5.032)
    {
    	printf("Bangkok");
    }	
    else if (milestone > 5.032 && milestone <= 35.477)
    {
    	printf("Samut Prakarn");
    }
    else if (milestone > 35.477 && milestone <= 52.900)
    {
	printf("Chachoengsao");
    }
    else if (milestone > 52.900 && milestone <= 58.855)
    {
    	printf("Chon Buri");
    }
    else
    {
	printf("InValid");
    }
    return 0;
}
