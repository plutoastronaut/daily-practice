#include<stdio.h>
int main()
{
	char score;
	printf("��������ĳɼ���A-E��\n");
	scanf_s("%c", &score);

	switch (score)
	{
	case 'A':
		printf("��ĳɼ�Ϊ90-100\n");
		break;
	case 'B':
		printf("��ĳɼ�Ϊ80-89\n");
		break;
	case 'C':
		printf("��ĳɼ�Ϊ70-79\n");
		break;
	case 'D':
		printf("��ĳɼ�Ϊ60-69\n");
		break;
	case 'F':
		printf("��ĳɼ�Ϊ0-59\n");
		break;
	default:
		printf("�������\n");

	}
	return 0;
}