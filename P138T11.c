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
	printf("��ʮ�η����߶�Ϊ%.3lf\n", H);
	printf("ʮ�κ󹲾���%.3lf", sum);
	return 0;
}