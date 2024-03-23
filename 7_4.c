#include<stdio.h>
int main()
{
	float weight;
	int High;
	printf("请输入你的身高\n");
	scanf_s("%d", &High);
	if (High > 100 && High <= 300)
	{
		weight = (High - 100) * 0.9 * 2;
		printf("您的标准体重为%.1f\n", weight);
	}
	return 0;
}