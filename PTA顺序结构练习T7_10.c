#include<stdio.h>
#include<math.h>

int main()
{
	double x, y;
	printf("请给出x的值：\n");
	scanf_s("%lf", &x);
	if (x >= 0)y = pow(x, 0.5);
	else y = pow(x + 1.0, 2.0) + 2.0 * x + 1.0 / x;
	printf("则y的值为%.2lf", y);
	return 0;
}