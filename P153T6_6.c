#include<stdio.h>

int main()
{
	char a[20] = { 'I',' ','a','m',' ','L','Q' };
	for (int i = 0; i < 20; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}