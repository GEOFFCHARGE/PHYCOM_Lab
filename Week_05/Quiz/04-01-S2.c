// 04-01 Yaris Ativ F1 Racing

#include <stdio.h>

int main()
{
	int safe, turn, scar, cond = 0;
	float dist;
	scanf("%d\n%f\n%d\n%d", &safe, &dist, &turn, &scar);
	if (safe == 0)
	{
		cond++;
	}
	if (turn <= 2)
	{
		cond++;
	}
	if (turn >= scar && turn <= scar + 1)
	{
		cond++;
	}
	if (dist >= 1)
	{
		cond++;
	}
	(cond == 0) ? printf("DRS allowed") : printf("DRS not allowed %d", cond);
	return 0;
}
