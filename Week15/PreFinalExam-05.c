// [Mock Exam] Ticket Fare (ข้อสอบปีที่แล้วมีข้อแบบนี้ แต่ง่ายกว่าเยอะ)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n, a, b, c, d, e ,f, g, ticket;
    scanf("%ld %ld %ld %ld %ld %ld %ld %ld", &n, &a, &b, &c, &d, &e ,&f, &g);
    long station = abs(g - f);
    if (station <= a)
    {
        ticket = b;
    }
    else if (station <= a + c)
    {
        ticket = b + (station - a) * d;
    }
    else
    {
    	ticket = b + d * c + (station - (a + c)) * e;
	}
    printf("%ld\n", ticket);
    return 0;
}

