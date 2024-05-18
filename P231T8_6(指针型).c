#include<stdio.h>

int main()
{
	int a[10],i,*p;
	printf("请给数组赋值：\n");
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	for (p = a; p < (a + 10); p++)
		printf("%d\t", *p);
	return 0;
}