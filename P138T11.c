#include<stdio.h>
int main()
{
	double H = 100.0, sum = 0;
	for(int i=1;i<=10;i++)
	{
		sum += (2.0 * H);
		H =H / 2.0;
	}
	sum = sum - 100;
	printf("第十次反弹高度为%.3lf\n", H);
	printf("十次后共经过%.3lf", sum);
	return 0;
}