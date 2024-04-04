#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入a,b:\n");
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	printf("这两个数顺序为\n%d %d", a, b);
	return 0;
}