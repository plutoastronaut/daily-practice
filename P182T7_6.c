#include<stdio.h>
int age(int n)
{
	int a;
	if (n == 1)a = 10;
	else a = age(n-1) + 2;
	return a;
}
int main()
{
	printf("%d", age(5));
	return 0;
}