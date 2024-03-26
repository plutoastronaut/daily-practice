#include<stdio.h>
int main()
{
	int time[10] = { 0 };							//确保10次循环中time[]的值均为0//
	int num[10];

	puts("请输入10个0⁓9内的数组元素：");			//定义数组元素,并循环计算出元素出现次数//
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);

		if (num[i] >= 0 && num[i] <= 9)				//计数操作，它将time数组中与numbers[i]相对应的元素的值增加1//
		{
			time[num[i]]++;
		}
	}
	
	for (int i = 0; i < 10; i++)					//列出程序结果//
	{
		printf("%d出现的次数为%d\n", i, time[i]);
	}
	return 0;
}