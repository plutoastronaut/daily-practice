#include<stdio.h>
int main()
{
	float weight;
	int High;
	printf("������������\n");
	scanf_s("%d", &High);
	if (High > 100 && High <= 300)
	{
		weight = (High - 100) * 0.9 * 2;
		printf("���ı�׼����Ϊ%.1f\n", weight);
	}
	return 0;
}