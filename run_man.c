#include<stdio.h>
int main()
{
	int minute;
	for (minute = 1; minute <= 100; minute++)
		{
			if (minute == 10)
			{
				printf("看见美女了，我要与他约会。");
					break;
			}
			printf("这个男孩已经跑了%d分钟\n", minute);
		}
	return 0;
}