#define _CRT_SECURE_NO_WARNINGS
//这是一个判断是否买的起游戏的程序//
#include<stdio.h>
int main()
{
	printf("请输入游戏的价格：\n");
	int money;
	scanf("%d", &money);

	if (money >= 300)
		{
	printf("太贵了，等打折再买\n");
	}
	else {
		printf("价格还行，直接买\n");
	}
	return 0;
}