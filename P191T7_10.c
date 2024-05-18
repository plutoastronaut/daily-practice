#include<stdio.h>
double average(double num[10])
{
	double aver,sum=0.0;
	for (int i = 0; i <= 9; i++)
	{
		sum += num[i];
	}
	aver = sum / 10.0;
	return aver;
}
int main()
{
	double a[10];
	double average0;
	printf("请输入这十位学生的成绩：\n");
	for (int i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%lf", &a[i]);
	}
	average0=average(a);
	printf("平均成绩为%.2lf", average0);
	return 0;
}