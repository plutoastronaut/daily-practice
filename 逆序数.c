#include<stdio.h>
int main()
{
	int num;
	int a, b, c;
	printf("请输入一个三位数：\n");

	scanf_s("%d", &num);
	a = num / 100;
	b = (num % 100) / 10;
	c = num % 10;

	printf("逆序数为：\n");
	printf("三位数的个位为%d\n", c);
	printf("三位数的十位为%d\n", b);
	printf("三位数的百位为%d\n", a);

	return 0;
}