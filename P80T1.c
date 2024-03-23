#include<stdio.h>
int main()
{
	float y1 , y10=10, r = 0.07;
	y10 = (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r);
	printf("y10=%f", y10);
	return 0;
}