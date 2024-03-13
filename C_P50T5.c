#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double D = 1.68;
	char Gchar = 'a', Lchar = 'd';
	int c;
	int g;
	int l;
	int sum;
		c = D;
		g = 'a';
		l = 'd';
		sum = c + g + 8 - 9 * 9 + 8 + l;
		printf("sum=%d",sum);
	return 0;
}