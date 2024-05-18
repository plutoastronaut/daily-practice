#include<stdio.h>

int main()
{
	char str0[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'} ,{' ',' ','*'} };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", str0[i][j]);
		}
		printf("\n");
	}
	return 0;
}