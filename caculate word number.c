#include<stdio.h>
int main()
{
	char array1[100];
	int word,blank=0;
	printf("�������ַ�����\n");
	gets(array1);
	for (int i = 0; array1[i]!='\0'; i++)
	{
		word =blank+1;
		if (array1[i] == ' ')
		{
			blank++;
		}
	}
	printf("һ����%d������",word);
	return 0;
}