#include<stdio.h>
int main()
{
	int i, sum = 0;
	printf("ÇëÊäÈëiµÄÖµ£º\n");
	scanf_s("%d", &i);
	do {
		sum += i;
		i++;
	} while (i <= 10);
	printf("%d", sum);
	return 0;
}