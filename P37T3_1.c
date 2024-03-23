#include<stdio.h>
int main(int argc, char* argv[])
{
	float F, C;
	F = 64.0;
	C = (5.0 / 9.0) * (F - 22.0);
	printf("华氏摄氏度%f℉\n转化为摄氏度为%f℃\n", F,C);
	return 0;
}