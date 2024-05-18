#include<stdio.h>

void exchange(int* p, int* q)
{
	int M = *p;
	*p = *q;
	*q = M;
}
void rank(int* p1, int* p2, int* p3)
{
	void exchange(int* p, int* q);
	if (*p1 < *p2)exchange(p1, p2);
	if (*p1 < *p3)exchange(p1, p3);
	if (*p2 < *p3)exchange(p2, p3);
}

int main()
{
	void rank(int* p1, int* p2, int* p3);
	int a, b, c;
	int* p1, * p2, * p3;

	printf("请输入a,b,c的值：\n");
	scanf_s("%d\n%d\n%d", &a, &b, &c);
	p1 = &a; p2 = &b; p3 = &c;
	rank(p1, p2, p3);
	printf("a,b,c从大到小排序为%d,%d,%d", a,b,c);

	return 0;
}