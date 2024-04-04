#include<stdio.h>
int main()
{
	int year, month, day;
	int monthnumber[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int daynumber = 0;

	puts("请输入任意一个年月日：");								//空格间隔年月日//
	scanf_s("%d %d %d", &year, &month, &day);

	for (int i = 1; i <= month; i++)
	{
		daynumber = daynumber + monthnumber[i];
	}
	daynumber = daynumber + day;

	if (year % 4 == 0 && month > 2)
	{
		daynumber = daynumber - 1;
	}
	printf("这是%d年的第%d天", year, daynumber);
	return 0;
}