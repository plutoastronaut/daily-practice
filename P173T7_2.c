#include<stdio.h>
int compare(int num1, int num2)
{
	int num3;
	if (num1 < num2)num3 = num2;
	else num3 = num1;
	return num3;
}
int main()
{
	int a, b,max;
	printf("请输入两个数：\n");
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	max=compare(a,b);
	printf("较大数值为%d", max);
	return 0;
}