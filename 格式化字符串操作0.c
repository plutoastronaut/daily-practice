#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main()
{
	char buf[100];
	sprintf(buf, "%d,%d,%d,%d", 6, 7, 618, 999);
	printf("%s\n", buf);

	int a, b, c, d;
	sscanf("0006000706180999", "%4d%4d%4d%4d", &a, &b, &c, &d);

	printf("%d,%d,%d,%d", a, b, c, d);
	return 0;
}