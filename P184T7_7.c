#include<stdio.h>
long long f(long long n)
{
	if (n == 1)return n;
	if (n > 1)return n * f(n - 1);
}
int main()
{
	int num;
	long long F;
	printf("������һ����:\nnum=");
	scanf_s("%d", &num);
	F=f(num);
	printf("num�Ľ׳�Ϊ%lld", F);
	return 0;
}