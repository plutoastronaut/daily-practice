#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	float area;
	puts("请分别输入三角形三边边长：\n");
	scanf_s("%d %d %d", &a, &b, &c);
	int sum = (a + b + c) / 2;

	if (a + b > c && a - b < c && b - a < c)
	{
		area = (sum * (sum - a) * (sum - b) * (sum - c)) ^ (1/2);
	}
	printf("三角形面积为 % .2f", area);
	return 0;
}