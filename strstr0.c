#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30] = "dajoijigdcdnaiud6a59";
	char str2[20] = "c";
	char* result;
	result = strstr(str1, str2);
	printf("%s\n", result);
	printf("%d\n", result - str1);
	return 0;
}