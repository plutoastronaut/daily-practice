#include<stdio.h>
int main()
{
	float sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{	
		sum += 1.0 / i;
	}
	printf("%.3lf",sum );
	return 0;
}