#include<stdio.h>
int main()
{
	int a, b, c;
	printf("������a,b:\n");
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	printf("��������˳��Ϊ\n%d %d", a, b);
	return 0;
}