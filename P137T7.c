#include<stdio.h>
int main ()
{
	double sum;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum1 += i;
		if (i <= 50)
			sum2 += (i * i);
		if (i <= 10)
			sum3 += (1 / i);
	}
	sum = sum1 + sum2 + sum3;
	printf("%.2lf", sum);
	return 0;
}