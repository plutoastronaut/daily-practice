#include<stdio.h>
#include<math.h>

int main()
{
	float amount, aver, total=0;
	int i;
	for (i = 1; i <= 1000; i++)
	{
		printf("第%d个人捐款：", i);
		scanf_s("%f", &amount);

		total += amount;
		if (total > 100000)
			goto show;
	}
show:
	printf("当前人数为%d\n", i);
	aver = amount / i;
	printf("平均每人捐款%.2f", aver);
	return 0;
}