#include<stdio.h>

int main()
{
	int x, y;
	scanf_s("%d", &x);
	if (x < 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else if (x > 0)
		y = 1;
	printf("y=%d", y);
	return 0;
}