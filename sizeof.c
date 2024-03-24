#include<stdio.h>
int main()
{
	int a[5][5];
	int b[][3] = {
		{11,12,13},
		{21,22,23},
		{31,32,33},
	};
	printf("sizeof(a)=%d\n", sizeof(a));
	printf("sizeof(b)=%d\n", sizeof(b));

	return 0;
}