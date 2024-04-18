#include<stdio.h>
int main()
{
	int num = 0;
	int rem;


	for (int i = 2; i < 1000; i++)
	{
		num = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				num = num + j;
			}
		}
		if (num == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}