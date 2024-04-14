#include<stdio.h>
#include<math.h>

int main()
{
	int num1, num2, num3;
	for (int i = 0; i < 1000; i++)
	{
		num1 = i % 10;
		num2 = i % 100 / 10;
		num3 = i / 100;
		if (i== num1*num1*num1 + num2*num2*num2 + num3*num3*num3)
			printf("%d\n", i);
	}

	return 0;
}