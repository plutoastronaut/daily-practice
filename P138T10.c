#include<stdio.h>
int main()
{
	int num1 = 1, num2 = 2;
	double sum = 0.0;
	for (int i = 1; i <= 20; i++)
	{
	sum += num2 / num1;
	num1 = num2;
	num2 += num1;
	}
	printf("sum= %.3lf", sum);
	return 0;
}