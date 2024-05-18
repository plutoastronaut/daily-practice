#include<stdio.h>

int main()
{
	int a[10], i, * p;
	p = a;
	printf("请给数组赋值：\n");
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	for (i=0; i<10;i++, p++)
		printf("%d\t", *p);
	return 0;
}