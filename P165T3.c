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
	printf("�������Ϊ��\n");
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
	printf("�Խ���Ԫ��֮��Ϊ%d", sum);
	return 0;
}