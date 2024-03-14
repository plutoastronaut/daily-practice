//计算三角形第三边范围（初版）//
#include<stdio.h>
int main()
{
	int a = 13;
	int b = 16;
	char c;
	int Min;
	int Max;
		Min = b - a;
		Max = b + a;
	printf("三角形的两边长分别为%d,%d\n", a, b);
	printf("第三边的取值范围为：%d<c<%d\n", Min, Max);

	return 0;
}