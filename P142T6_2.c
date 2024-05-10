#include<stdio.h>

int main()
{
	int i;
	int F[20] = { 1,1 };
	for (i = 2; i < 20; i++)
		F[i] = F[i - 2] + F[i - 1];
	for (i = 0; i < 20; i++)
	{
		printf("%12d\t", F[i]);
		if (i>0&&i % 5 == 0)printf("\n");
	}
	printf("\n");
	return 0;
}