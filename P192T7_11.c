#include<stdio.h>
double average(double num[],int n)
{
	double aver, sum = 0.0;
	for (int i = 0; i <= n; i++)
	{
		sum =sum+ num[i];
	}
	aver = sum / n;
	return aver;
}
int main()
{
	double score1[30], score2[35],aver;
	int i;
	printf("������һ��ɼ�\n");
	for (i = 0; i < 30; i++)
	{
		printf("score1[%d]=", i);
		scanf_s("%lf", &score1[i]);
	}
	aver = average(score1, 30);
	printf("һ���ƽ���ɼ�Ϊ%.2lf", aver);
	printf("\n");
	printf("���������ɼ�\n");
	for (i = 0; i < 35; i++)
	{
		printf("score2[%d]=", i);
		scanf_s("%lf", &score1[i]);
	}
	aver = average(score1, 35);
	printf("�����ƽ���ɼ�Ϊ%.2lf", aver);
	return 0;
}