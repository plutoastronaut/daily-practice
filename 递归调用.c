#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double Fn(int a, int b, double c);
int main()
{
	int n, x;
	double F=0.0;

	printf("������n��ֵ\n");
	scanf_s("%d", &n);
	printf("������x��ֵ\n");
	scanf_s("%d", &x);

	F = Fn(n, x, F);
	printf("�õݹ��㷨�ó��ĺ���ֵΪ��%.2lf", F);
	F
	return 0;
}
double Fn(int a, int b, double c)
{
	if (a == 0) return 1;
	else if (a == 1) return 2 * b;
	else if (a > 1)return 2 * b * Fn(a - 1, b, c) - 2 * (a - 1) * Fn(a - 2, b, c);
}