#include<stdio.h>
#include<math.h>

int main()
{
	float amount, aver, total=0;
	int i;
	for (i = 1; i <= 1000; i++)
	{
		printf("��%d���˾�", i);
		scanf_s("%f", &amount);

		total += amount;
		if (total > 100000)
			goto show;
	}
show:
	printf("��ǰ����Ϊ%d\n", i);
	aver = amount / i;
	printf("ƽ��ÿ�˾��%.2f", aver);
	return 0;
}