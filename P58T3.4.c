#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	float area;
	puts("��ֱ��������������߱߳���\n");
	scanf_s("%d %d %d", &a, &b, &c);
	int sum = (a + b + c) / 2;

	if (a + b > c && a - b < c && b - a < c)
	{
		area = (sum * (sum - a) * (sum - b) * (sum - c)) ^ (1/2);
	}
	printf("���������Ϊ % .2f", area);
	return 0;
}