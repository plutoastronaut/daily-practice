#include<stdio.h>
int main()
{
	int* p = NULL, * q = NULL, a[5], b[5];
	p = &a;
	q = b;
	printf("����������a��ֵ��\n");

	for (int i = 0; i < 5; i++)
		scanf_s("%d", p++);
	for (int j = 0; j < 5; j++)
		scanf_s("%d",q++);

	p = a;
	q = b;

	printf("array a is:\n");
	for (int i = 0; i < 5; i++)
		printf("%5d", *(p+i));
	printf("\n");

	printf("array b is:\n");
	for (int j = 0; j < 5; j++)
		printf("%5d", *(q+j));
	printf("\n");

	return 0;
}