#include <stdio.h>
#include <string.h>

float transition(float degree_centigrade);

int main()
{
	float degree_centigrade;
	float fahrenheit_degree;
	char a[4];
	printf("��Ҫת�������϶ȣ�");
	scanf_s("%f", &degree_centigrade);
	do
	{
		fahrenheit_degree=transition(degree_centigrade);
		printf("* * * * * * * * * * * * * *\n*ת��Ϊ���϶ȵ���ֵΪ %.2f\t*\n* * * * * * * * * * * * * *\n", fahrenheit_degree);
		printf("��Ҫ����������yes, �������������no:\n");
		scanf_s(" %s", a, sizeof(a));
	} while (strcmp(a, "yes") == 0);

	return 0;
}

float transition(float degree_centigrade)
{
	return 32 + degree_centigrade * 1.8;
}
