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
	printf("��������������\n");
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	sum = caculation(a, b);
	printf("��Ϊ%d", sum);
	return 0;
}