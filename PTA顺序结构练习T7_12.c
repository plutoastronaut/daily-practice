#include<stdio.h>

int main()
{
	int M, N;
	printf("请输入M的值：");
	scanf_s("%d", &M);
	printf("请输入N的值：");
	scanf_s("%d", &N);
	if (M % N == 0)printf("YES");
	else printf("NO");

	return 0;
}