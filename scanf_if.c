#define _CRT_SECURE_NO_WARNINGS
//����һ���ж��Ƿ��������Ϸ�ĳ���//
#include<stdio.h>
int main()
{
	printf("��������Ϸ�ļ۸�\n");
	int money;
	scanf("%d", &money);

	if (money >= 300)
		{
	printf("̫���ˣ��ȴ�������\n");
	}
	else {
		printf("�۸��У�ֱ����\n");
	}
	return 0;
}