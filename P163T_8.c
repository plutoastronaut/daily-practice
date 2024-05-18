#include<stdio.h>
#include<string.h>

int main()
{
	char word[100],str0;
	int num=0, i;
	printf("请使用英语输入一段句子：\n");
	fgets(word,sizeof(word),stdin);
	if (word[0] != ' ' && word[0] != '\n' && word[0] != '\0')
	{
		num = 1;
	}
	for (i = 0;word[i] != '\0'; i++)
	{
		if (word[i] != ' ' && word[i] != '\n' && word[i - 1] == ' ')
		{
			num++;
		}
	}
	printf("单词数为%d", num);
	return 0;
}
