#include<stdio.h>
int main()
{
	printf("求三个数中的最小值");
		int a, b, c, min;
		printf("请输入三个整数：");
	scanf_s("%d,%d,%d",&a,&b,&c);
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	printf("%d\n",min);
		return 0;
}