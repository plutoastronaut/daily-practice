#include<stdio.h>

void exchange(int* p, int* q)
{
	int*M = p;
	p = q;
	q = M;
}

int main()
{
	int a, b;
	int* p, * q;
	printf("«Î ‰»Îa,bµƒ÷µ£∫\n");
	scanf_s("%d\n%d", &a, &b);
	p = &a; q = &b;
	if(a<b)exchange(p, q);
	printf("max=%d,min=%d", *p, *q);
	return 0;
}