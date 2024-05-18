#include<stdio.h>
float compare(float num1, float num2)
{
	float num3;
	if (num1 < num2)num3 = num2;
	else num3 = num1;
	return num3;
}
int main()
{
	float a, b, max;
	printf("请输入两个数：\n");
	printf("a=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	max = compare(a, b);
	printf("较大数值为%f", max);
	return 0;
}