#include<stdio.h>
int main()
{
	char gender[1], name[5];
	int age, high, weight;					//�����Ա����������䣬���,����//
	
	printf("��������Ļ�����Ϣ\n");

		puts("�������Ա�");
			gets(gender);
		puts("�������������:");
			gets(name);
		puts("�������������䣺");
			scanf_s("%d", &age);
		puts("������������ߣ�");
			scanf_s("%d" ,& high);
		puts("�������������أ�");
			scanf_s("%d", &weight);

	printf("���Ļ�����Ϣ���£�\n");
		puts("�Ա�");
		puts(gender);

		puts("������");
		puts(name);

		puts("���䣺");
		printf("%d ��\n", age);

		puts("��ߣ�");
		printf("%d cm\n", high);

		puts("���أ�");
		printf("%d kg\n", weight);

	return 0;
}