#include<stdio.h>

int main()
{
	int M, N;
	printf("������M��ֵ��");
	scanf_s("%d", &M);
	printf("������N��ֵ��");
	scanf_s("%d", &N);
	if (M % N == 0)printf("YES");
	else printf("NO");

	return 0;
}