#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b,c,S;

	scanf("%d",&S);
	if (S >= 100 && S <= 999)
	{
		a = S / 100;
		b = S % 100 / 10;
		c = S % 10;
		printf("��λ����Ϊ%d\nʮλ����Ϊ%d\n��λ����Ϊ%d\n",a,b,c);
	}
	return 0;
}