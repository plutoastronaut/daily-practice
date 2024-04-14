#include<stdio.h>
int main()
{
	int I;
	double K = 0;
	int range;
	printf("请输入利润I的值：\n");
	scanf_s("%d", &I);

	//if语句编译//
	if (I >= 0 && I <= 10000)
	{
		range = 1;
		K = I * 0.1;
	}
	else if (I > 10000 && I <= 20000)
	{
		range = 2;
		K = 1000.0 + (I - 10000.0) * 0.075;
	}
	else if (I > 20000 && I <= 40000)
	{
		range = 3;
		K = 1750.0 + (I - 20000.0) * 0.05;
	}
	else if (I > 40000 && I <= 60000)
	{
		range = 4;
		K = 1750.0 + 20000.0 * 0.05 + (I - 40000) * 0.03;
	}
	else if (I > 60000 && I <= 100000)
	{
		range = 5;
		K = 1750.0 + 20000.0 * 0.08 + (I - 60000) * 0.015;
	}
	else if (I > 100000)
	{
		range = 6;
		K = 1750.0 + 20000.0 * 0.08 + (I - 40000) * 0.03 + 40000.0 * 0.015;
	}
	printf("应发奖金%.2lf元\n", K);

	//switch语句编译//
	switch (range)
	{
	case 1:K = I * 0.1; break;
	case 2:K = 1000.0 + (I - 10000.0) * 0.075; break;
	case 3:K = 1750.0 + (I - 20000.0) * 0.05; break;
	case 4:K = 1750.0 + 20000.0 * 0.05 + (I - 40000) * 0.03; break;
	case 5:K = 1750.0 + 20000.0 * 0.08 + (I - 60000) * 0.015; break;
	case 6:K = 1750.0 + 20000.0 * 0.08 + (I - 40000) * 0.03 + 40000.0 * 0.015; break;
	default:printf("输入错误：\n"); break;
	}
	printf("应发奖金%.2lf元\n", K);
	return 0;
}