#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main()
{
	char a[]= "[ti:¼òµ¥°®]";
	char b[30];

	sscanf(a, "[ti:%[^]]", b);
	printf("%s\n", b);
	return 0;
}