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
	printf("��������ʮλѧ���ĳɼ���\n");
	for (int i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%lf", &a[i]);
	}
	average0=average(a);
	printf("ƽ���ɼ�Ϊ%.2lf", average0);
	return 0;
}