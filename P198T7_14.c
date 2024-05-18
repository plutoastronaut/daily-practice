#include<stdio.h>
#include<math.h>

double average_score(double a[10]);
double max_score(double a[10]);
double min_score(double a[10]);

int main()
{
	double a[10],average,max,min;
	int i;
	printf("请输入十位学生的成绩：\n");
	for (i = 0; i < 10; i++)
	{
		printf("第%d位学生成绩为：", i+1);
		scanf_s("%lf", &a[i]);
	}
	average=average_score(a);
	max=max_score(a);
	min=min_score(a);
	printf("平均成绩为%.2lf\n最好成绩为%.2lf\n最差成绩为%.2lf\n", average, max, min);
	return 0;
}
double average_score(double a[10])
{
	double sum=0.0, average;
	int i;
	for (i = 0; i <= 9; i++)
		sum += a[i];
	average = sum / 10.0;
	return average;
}
double max_score(double a[10])
{
	double max=a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)max = a[i];
	}
	return max;
}
double min_score(double a[10])
{
	double min = a[0];
	for (int i = 1; i < 10; i++)
	{
		if (a[i] <min)min = a[i];
	}
	return min;

}
