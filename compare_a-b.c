#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a = 1;
	int b = 1;
	printf("������a��ֵ\n");
	scanf("%d,\n", &a);

	printf("������b��ֵ\n");
	scanf("%d,\n", &b);
	if (a < b)
		printf("aС��b");
	else if (a = b)
		printf("a����b");
	else if (a > b)
		printf("a����b");

	return 0;
}