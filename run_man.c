#include<stdio.h>
int main()
{
	int minute;
	for (minute = 1; minute <= 100; minute++)
		{
			if (minute == 10)
			{
				printf("������Ů�ˣ���Ҫ����Լ�ᡣ");
					break;
			}
			printf("����к��Ѿ�����%d����\n", minute);
		}
	return 0;
}