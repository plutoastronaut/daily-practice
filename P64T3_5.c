#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c,M;
	float x1, x2;
	double p, q;
	puts("请输入方程系数a,b,c:");
	scanf_s("%d,%d,%d", &a, &b, &c);

	M = b ^ 2 - 4 * a * c;
	p = -(b / (2*a));
	q = (M ^ (1 / 2)) / (2 * a);

	x1 = p + q;
	x2 = p - q;

	printf("方程的解为：\nx1=%lf\nx2=%lf\n", x1, x2);
	return 0;
}