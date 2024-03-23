#include<stdio.h>
int main()
{
	float P1 = 1000,R1 = 0.0036, R2 = 0.0225, R3 = 0.0198, P2, P3, P4;
	P2 = P1 * (1 + R1);
	P3 = P1 * (1 + R2);
	P4 = P1 * (1 + R3 / 2)*(1+R3/2);
	printf("P2=%f\nP3=%f\nP4=%f\n", P2, P3, P4);
	return 0;
}