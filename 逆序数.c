#include<stdio.h>
int main()
{
	int num;
	int a, b, c;
	printf("������һ����λ����\n");

	scanf_s("%d", &num);
	a = num / 100;
	b = (num % 100) / 10;
	c = num % 10;

	printf("������Ϊ��\n");
	printf("��λ���ĸ�λΪ%d\n", c);
	printf("��λ����ʮλΪ%d\n", b);
	printf("��λ���İ�λΪ%d\n", a);

	return 0;
}