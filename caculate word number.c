#include<stdio.h>
int main()
{
	char array1[100];
	int word,blank=0;
	printf("请输入字符串：\n");
	gets(array1);
	for (int i = 0; array1[i]!='\0'; i++)
	{
		word =blank+1;
		if (array1[i] == ' ')
		{
			blank++;
		}
	}
	printf("一共有%d个单词",word);
	return 0;
}