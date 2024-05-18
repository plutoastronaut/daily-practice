#include<stdio.h>

int main()
{
	int a, b;
	int* p, * q,*M;
	printf("请输入a,b的值：\n");
	scanf_s("%d\n%d", &a, &b);
	p = &a; q = &b;
	if (a < b)
	{
		M = p;
		p = q;
		q = M;
	}
	printf("a,b由大到小排序为:%d,%d", *p, *q);
	return 0;
}