#include<stdio.h>
#include<math.h>
int timevalue(int s1, int s2);
int a[5] = { 5,10,15,20,25 };
int value;
int main()
{
	int s1, s2;

	printf("������������վ��\n");
	scanf_s("%d %d", &s1, &s2);
	timevalue(s1, s2);
	printf("��վ֮���г���Ҫ%d����", value);
	return 0;
}

int timevalue(int s1, int s2)
{
	extern int a[5];
	value = abs(a[s1] - a[s2]);
	return value;
}