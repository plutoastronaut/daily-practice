#include<stdio.h>

int main()
{
	int a[10], max, temp, i;
	printf("请输入十个数：\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)
	{
		max = 0;
		if (a[i + 1] > a[i])
		{
			max = a[i + 1];
			temp = i + 1;
		}
		else
		{
			max = a[i];
			temp = i;
		}
	}
	printf("最大的数为第%d个数，值为%d", temp, max);
	return 0;
}