#include<stdio.h>
int main()
{
	char* p = NULL, * q = NULL;
	char array1[] = "Every man is best konw to himself\n";
	char array2[] = "自己最了解自己";

	printf("************************************\n");
	for (int i = 0; array1[i] != '\0'; i++)
	{
		printf("%c", array1[i]);
	}
	for (int j = 0; array2[j] != '\0'; j++)
	{
		printf("%c", array2[j]);
	}
	printf("\n");
	printf("************************************\n\n");

	p = array1;
	q = array2;
	printf("************************************\n");
	printf("%s\n",p);
	printf("%s\n",q);
	printf("************************************\n");
	return 0;
}