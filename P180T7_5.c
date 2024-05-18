#include<stdio.h>
int compare(int a, int b)
{
	int num;
	if (a < b)num = b;
	else num = a;
	return num;
}
int pare(int num0,int num1, int num2, int num3)
{
	int max;
	max = compare(num0, num1);
	max = compare(num1, num2);
	max = compare(num2, num3);
	return max;
}
int main()
{
	int a[4],max;
	printf("请输出四个数\n");
	for (int i = 0; i < 4; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	max = pare(a[0],a[1],a[2],a[3]);
	printf("四个数中最大的数为%d", max);
	return 0;
}