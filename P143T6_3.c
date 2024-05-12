#include<stdio.h>
int main()
{
	int a[10] = { 15,54,2,368,41,5,2,741,61,44 };
	int i, j;
	int temp;
	for (i = 0; i < 10; i++)
	{
		for(j=9;j>=i;j--)
			if (a[j] < a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}