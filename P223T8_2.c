#include<stdio.h>

int main()
{
	int a, b;
	int* p, * q,*M;
	printf("������a,b��ֵ��\n");
	scanf_s("%d\n%d", &a, &b);
	p = &a; q = &b;
	if (a < b)
	{
		M = p;
		p = q;
		q = M;
	}
	printf("a,b�ɴ�С����Ϊ:%d,%d", *p, *q);
	return 0;
}