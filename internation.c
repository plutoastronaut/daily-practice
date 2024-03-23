#include<stdio.h>
int main()
{
	char gender[1], name[5];
	int age, high, weight;					//定义性别，姓名，年龄，身高,体重//
	
	printf("请输入你的基本信息\n");

		puts("请输入性别：");
			gets(gender);
		puts("请输入你的名字:");
			gets(name);
		puts("请输入您的年龄：");
			scanf_s("%d", &age);
		puts("请输入您的身高：");
			scanf_s("%d" ,& high);
		puts("请输入您的体重：");
			scanf_s("%d", &weight);

	printf("您的基本信息如下：\n");
		puts("性别：");
		puts(gender);

		puts("姓名：");
		puts(name);

		puts("年龄：");
		printf("%d 岁\n", age);

		puts("身高：");
		printf("%d cm\n", high);

		puts("体重：");
		printf("%d kg\n", weight);

	return 0;
}