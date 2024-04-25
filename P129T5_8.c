#include<stdio.h>

int main()
{
	int a = 1, b = 1;
	printf("%d\n%d\n", a, b);
	for (int i = 1; i <= 40; i++)
	{
		if (i >= 3)
		{
			int F = a + b;
			a = b;
			b = F;
			printf("%d\n", F);
		}
	}
	return 0;
}