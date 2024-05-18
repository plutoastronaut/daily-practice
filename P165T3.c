#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a[3][3], i, j, sum=0;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);
	}
	printf("数组矩阵为：\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			sum += a[i][i];
			sum += a[i][2 - i];
		}
	}
	printf("对角线元素之和为%d", sum);
	return 0;
}