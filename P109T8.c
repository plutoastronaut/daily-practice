#include<stdio.h>
int main()
{
	char score;
	printf("请输入你的成绩在A-E中\n");
	scanf_s("%c", &score);

	switch (score)
	{
	case 'A':
		printf("你的成绩为90-100\n");
		break;
	case 'B':
		printf("你的成绩为80-89\n");
		break;
	case 'C':
		printf("你的成绩为70-79\n");
		break;
	case 'D':
		printf("你的成绩为60-69\n");
		break;
	case 'F':
		printf("你的成绩为0-59\n");
		break;
	default:
		printf("输入错误\n");

	}
	return 0;
}