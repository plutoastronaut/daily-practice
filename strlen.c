#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int len, i;
	char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	len = strlen(buf);
	strncpy(buf, "helloworld", 24);
	for (i = 0; i < len; i++)
		printf("%c", buf[i]);
	printf("\n");
}