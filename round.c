#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float r, h, L, Lr, S1, Sr, Vr, Vi;
	
	scanf("%f %f", &r, &h);
		Vi = r * r * h;

	printf("圆柱体体积为%.2fΠ",Vi );
	return 0;
}