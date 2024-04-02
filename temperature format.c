#include <stdio.h>
#include <string.h>

float transition(float degree_centigrade);

int main()
{
	float degree_centigrade;
	float fahrenheit_degree;
	char a[4];
	printf("您要转换的摄氏度：");
	scanf_s("%f", &degree_centigrade);
	do
	{
		fahrenheit_degree=transition(degree_centigrade);
		printf("* * * * * * * * * * * * * *\n*转化为华氏度的数值为 %.2f\t*\n* * * * * * * * * * * * * *\n", fahrenheit_degree);
		printf("如要继续请输入yes, 如需结束请输入no:\n");
		scanf_s(" %s", a, sizeof(a));
	} while (strcmp(a, "yes") == 0);

	return 0;
}

float transition(float degree_centigrade)
{
	return 32 + degree_centigrade * 1.8;
}
