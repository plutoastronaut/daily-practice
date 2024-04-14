#include<stdio.h>
int main()
{
	int sum = 0, factorial = 1;
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			factorial *= j;
		}
		sum += factorial;
	}
	printf("%d", sum);
	return 0;
}