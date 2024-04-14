#include<stdio.h>
int main()
{
	int num = 1;
	for (int i = 1; i <=9; i++)
	{
		num = (num + 1) * 2;
	}

	printf("第一天摘了%d个", num);
	return 0;
}