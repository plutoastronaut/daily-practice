#include<stdio.h>
int main()
{
	int i, j;
	char array1[5][5] = {
		{'a','b','c','d','e'},
		{'b','a','8','d','d'},
		{'c','d','a','e','c'},
		{'d','j','f','a','b'},
		{'e','d','a','f','a'},
	};
	for (i = 0; i < 5; i++)
	{
		printf("对角线上的字符为%c\n",array1[i][i]);
	}
	return 0;
}