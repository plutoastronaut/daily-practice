#include<stdio.h>

int main()
{
	int num, t = 1;
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)t = 0;

		if (t = 1) printf("%d\n", num);
	}
	return 0;
}