#include<stdio.h>
int main()
{
	int num1;
	printf("������һ����λ���ڵ���������\n");
	scanf_s("%d", &num1);
	int num = num1;

	if (num1 >= 0 && num1 <= 99999)
	{
		int i = 0, a1, a2, a3, a4, a5;
		do {
			i++;
			num /= 10;
		} while (num != 0);
		printf("���������Ϊ%dλ��\n", i);
		switch(i)
		{
		case 1:
			a1 = num1;
			printf("�����Ϊ��λ����%d\n", a1);
			printf("�����������Ϊ��%d\n", a1);
			break;
		case 2:
			a1 = num1 % 10;
			a2 = num1 / 10;
			printf("�����Ϊ��λ����%d��%d\n",a2,a1);
			printf("�����������Ϊ��%d%d\n",a1,a2);
			break;
		case 3:
			a3 = num1 / 100;
			a2 = (num1 % 100) / 10;
			a1 = num1 % 10;
			printf("�����Ϊ��λ����%d��%d��%d\n", a3, a2, a1);
			printf("�����������Ϊ��%d%d%d\n",a1, a2, a3);
			break;
		case 4:
			a4 = num1 / 1000;
			a3 = (num1 % 1000) / 100;
			a2 = (num1 % 100) / 10;
			a1 = num1 % 10;
			printf("�����Ϊ��λ��: %d, %d��%d��%d\n", a4, a3, a2, a1);
			printf("�����������Ϊ��%d%d%d%d\n",a1, a2, a3, a4);
			break;
		case 5:
			a5 = num1 / 10000;
			a4 = (num1%10000)/ 1000;
			a3 = (num1 % 1000) / 100;
			a2 = (num1 % 100) / 10;
			a1 = num1 % 10;
			printf("�����Ϊ��λ����%d, %d, %d��%d��%d\n", a5, a4, a3, a2, a1);
			printf("�����������Ϊ��%d%d%d%d%d\n", a1, a2, a3, a4, a5);
			break;
		}
	}
	else
		printf("�������\n");
	return 0;
}