#include<stdio.h>

int main()
{
	int a[10], max, temp, i;
	printf("������ʮ������\n");
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
	printf("������Ϊ��%d������ֵΪ%d", temp, max);
	return 0;
}