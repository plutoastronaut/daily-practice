#include<stdio.h>

int main()
{
	int a[3][4], i, j,max=0;
	printf("������鸳ֵ��\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("�������£�\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (a[i][j] >= max)max = a[i][j];
		}
	}
	printf("���ֵΪ%d", max);
	return 0;
}