#include<stdio.h>
int main()
{
	char s;
	scanf_s("%c", &s);
	printf("你的成绩为\n");

	switch (s)
	{
	case'A':
		printf("85⁓100\n");
		break;
	case'B':
		printf("70⁓84\n");
		break;
	case'C':
		printf("60⁓69\n");
		break;
	case'D':
		printf("0⁓59\n");
		break;
	default:
		printf("error");
	}
	return 0;
}