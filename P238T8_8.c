#include<stdio.h>
void unrank(int a[], int n)
{
	int* p, * i, * j, m = (n - 1) / 2;
	i = a; j = a + n - 1; p = a + m;
	for (; i <= p; i++, j--)
	{
		int temp = *i;
		*i = *j; 
		*j = temp;
	}
}
int main()
{
	int a[10],i;
	for (i = 0; i <= 9; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	printf("此时数组顺序为：\n");
	for (i = 0; i <= 9; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	unrank(a,10);
	printf("交换后数组顺序为：\n");
	for (i = 0; i <= 9; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}