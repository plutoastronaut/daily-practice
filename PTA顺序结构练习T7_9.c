#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	double y;
	printf("������x��ֵ��\n");
	scanf_s("%d", &x);
	if (x == 0)y = 0;
	else y = 1.0 / x;
	printf("��y��ֵΪ%.2lf", y);

	return 0;
}