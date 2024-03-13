#include<stdio.h>
int main()
{
	unsigned int i;
	for (i = 0; i < 255; i++)
	{
		printf("%c %d", i, i);
		if (i % 10 == 0)
			printf("\n");
	}
		return 0;
}