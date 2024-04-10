#include<stdio.h>
int main()
{
	int day1, day2, day3, sum=2000;
	int* p = sum;
	day1 = 600;
	(int)(day2 = sum/5);
	(int)(day3 = sum / 4);
	sum = (day1 + day2 + day3) * 4 / 3;
	printf("%d\n", sum);
	printf("%p", &p);
	return 0;
}