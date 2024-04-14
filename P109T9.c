#include<stdio.h>
int main()
{
	int num1;
	printf("请输入一个五位以内的正整数：\n");
	scanf_s("%d", &num1);
	int num = num1;

	if (num1 >= 0 && num1 <= 99999)
	{
		int i = 0, a1, a2, a3, a4, a5;
		do {
			i++;
			num /= 10;
		} while (num != 0);
		printf("您输入的数为%d位数\n", i);
		switch(i)
		{
		case 1:
			a1 = num1;
			printf("这个数为个位数：%d\n", a1);
			printf("这个数逆序数为：%d\n", a1);
			break;
		case 2:
			a1 = num1 % 10;
			a2 = num1 / 10;
			printf("这个数为两位数：%d，%d\n",a2,a1);
			printf("这个数逆序数为：%d%d\n",a1,a2);
			break;
		case 3:
			a3 = num1 / 100;
			a2 = (num1 % 100) / 10;
			a1 = num1 % 10;
			printf("这个数为三位数：%d，%d，%d\n", a3, a2, a1);
			printf("这个数逆序数为：%d%d%d\n",a1, a2, a3);
			break;
		case 4:
			a4 = num1 / 1000;
			a3 = (num1 % 1000) / 100;
			a2 = (num1 % 100) / 10;
			a1 = num1 % 10;
			printf("这个数为四位数: %d, %d，%d，%d\n", a4, a3, a2, a1);
			printf("这个数逆序数为：%d%d%d%d\n",a1, a2, a3, a4);
			break;
		case 5:
			a5 = num1 / 10000;
			a4 = (num1%10000)/ 1000;
			a3 = (num1 % 1000) / 100;
			a2 = (num1 % 100) / 10;
			a1 = num1 % 10;
			printf("这个数为五位数：%d, %d, %d，%d，%d\n", a5, a4, a3, a2, a1);
			printf("这个数逆序数为：%d%d%d%d%d\n", a1, a2, a3, a4, a5);
			break;
		}
	}
	else
		printf("输入错误：\n");
	return 0;
}