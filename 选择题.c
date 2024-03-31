#include<stdio.h>
int main()
{
	char S[8] = {'a','b','d','c','c','d','a','b'};

	for(int i=0;i<8;i++)
	{
		switch (i)
		{
		case 0:
			printf("第一个选择题答案为%c\n", S[0]);
			break;

		case 1:
			printf("第二个选择题答案为%c\n", S[1]);
			break;

		case 2:
			printf("第三个选择题答案为%c\n", S[2]);
			break;

		case 3:
			printf("第四个选择题答案为%c\n", S[3]);
			break;

		case 4:
			printf("第五个选择题答案为%c\n", S[4]);
			break;

		case 5:
			printf("第六个选择题答案为%c\n", S[5]);
			break;

		case 6:
			printf("第七个选择题答案为%c\n", S[6]);
			break;

		case 7:
			printf("第八个选择题答案为%c\n", S[7]);
			break;
		}
	}
	return 0;
}