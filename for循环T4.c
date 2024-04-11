#include<stdio.h>
int main()
{
	int sum = 0, num = 0, average = 0;
	for (int i = 1; i <= 100; i++, i++)
	{
		sum += i;
		num++;
	}
	average = sum / num;
	printf("%d\n", sum);
	printf("%d\n", num); 
	printf("%d\n", average);
	return 0;
}