#include<stdio.h>

void compare(int* p, int* q)
{
	int* M;
	if (*p < *q)
	{
		M = p;
		p = q;
		q = M;
	}
}

int main()
{
	int a, b;
	int* p, * q;
	printf("������a,b��ֵ��\n");
	scanf_s("%d\n%d", &a, &b);
	p = &a; q = &b;
	compare(p, q);
	printf("a,b�ɴ�С����Ϊ:%d,%d", *p, *q);
	return 0;
}