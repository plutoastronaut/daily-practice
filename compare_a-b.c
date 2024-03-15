#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a = 1;
	int b = 1;
	printf("请输入a的值\n");
	scanf("%d,\n", &a);

	printf("请输入b的值\n");
	scanf("%d,\n", &b);
	if (a < b)
		printf("a小于b");
	else if (a = b)
		printf("a等于b");
	else if (a > b)
		printf("a大于b");

	return 0;
}