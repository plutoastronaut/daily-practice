#include<stdio.h>
int main()
{
	char S[8] = {'a','b','d','c','c','d','a','b'};

	for(int i=0;i<8;i++)
	{
		switch (i)
		{
		case 0:
			printf("��һ��ѡ�����Ϊ%c\n", S[0]);
			break;

		case 1:
			printf("�ڶ���ѡ�����Ϊ%c\n", S[1]);
			break;

		case 2:
			printf("������ѡ�����Ϊ%c\n", S[2]);
			break;

		case 3:
			printf("���ĸ�ѡ�����Ϊ%c\n", S[3]);
			break;

		case 4:
			printf("�����ѡ�����Ϊ%c\n", S[4]);
			break;

		case 5:
			printf("������ѡ�����Ϊ%c\n", S[5]);
			break;

		case 6:
			printf("���߸�ѡ�����Ϊ%c\n", S[6]);
			break;

		case 7:
			printf("�ڰ˸�ѡ�����Ϊ%c\n", S[7]);
			break;
		}
	}
	return 0;
}