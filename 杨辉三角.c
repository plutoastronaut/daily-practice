#include<stdio.h>
int main()
{
	for (int a = 0; a <= 10; ++a)		
	{
		int S = 1;
		for (int b = 0; b <= a; ++b)
		{
				printf("%d ", S);
				S = S * (a - b) / (b + 1);
		}
		printf("\n");
	}

	return 0;
}