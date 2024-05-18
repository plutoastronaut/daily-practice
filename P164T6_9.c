#include<stdio.h>
#include<string.h>

int main()
{
	char str[3][100];
	int i;
	printf("请输入三个字符串：\n");
	for (i = 0; i < 3; i++)
		gets(str[i]);
	if (strcmp(str[0], str[1]) == 1)
	{
		if (strcmp(str[0], str[2]) == 1)printf("最大为:\n%s", str[0]);
		else if(strcmp(str[0], str[2]) == -1) printf("最大为:\n%s", str[2]);
	}
	else
	{
		if (strcmp(str[1], str[2]) == 1)printf("最大为:\n%s", str[1]);
		else if (strcmp(str[1], str[2]) == -1) printf("最大为:\n%s", str[2]);
	}
	return 0;
}