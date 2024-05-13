#include<stdio.h>

int main()
{
	int a[3][3],b[3][3];
	int i, j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		scanf_s("%d", &a[i][j]);
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}