#include<stdio.h>
#include<math.h>
int timevalue(int s1, int s2);
int a[5] = { 5,10,15,20,25 };
int value;
int main()
{
	int s1, s2;

	printf("请输入任意两站：\n");
	scanf_s("%d %d", &s1, &s2);
	timevalue(s1, s2);
	printf("两站之间行车需要%d分钟", value);
	return 0;
}

int timevalue(int s1, int s2)
{
	extern int a[5];
	value = abs(a[s1] - a[s2]);
	return value;
}