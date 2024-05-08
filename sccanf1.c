#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main()
{
	int minute;
	float sec;

	sscanf("[02:06.85]", "[%d:%f]",&minute,&sec);
	printf("%02d\n", minute);
	printf("%02.2f", sec);

	return 0;
}