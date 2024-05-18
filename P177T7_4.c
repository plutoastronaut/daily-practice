#include<stdio.h>
int caculation(int num1, int num2)
{
	int num3;
	num3 = num1 + num2;
	return num3;
}
int main()
{
	int a, b, sum;
	printf("请输入两个数：\n");
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	sum = caculation(a, b);
	printf("和为%d", sum);
	return 0;
}