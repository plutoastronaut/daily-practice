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
	printf("请输入a,b的值：\n");
	scanf_s("%d\n%d", &a, &b);
	p = &a; q = &b;
	compare(p, q);
	printf("a,b由大到小排序为:%d,%d", *p, *q);
	return 0;
}