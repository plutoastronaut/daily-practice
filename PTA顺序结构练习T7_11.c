#include<stdio.h>
#include<math.h>

int main()
{
	int x, y;
	scanf_s("%d", &x);
	if (x % 2 == 0)y = x * 2;
	else y = x * 3;
	printf("y=%d", y);
	return 0;
}