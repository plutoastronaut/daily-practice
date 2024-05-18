#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	double y;
	printf("请输入x的值：\n");
	scanf_s("%d", &x);
	if (x == 0)y = 0;
	else y = 1.0 / x;
	printf("则y的值为%.2lf", y);

	return 0;
}