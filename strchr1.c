#include <string.h>
#include <stdio.h>
int main()
{
	char str1[] = "helloworldhelloworldhelloworld";
	char* p=str1;
    int count = 0;
    int position;

    while ((p = strchr(p, 'w')) != NULL) 
    {
        position = p - str1;
        printf("�ַ�w���ֵ�λ��Ϊ��%d���ַ�\n", position);
        count++; 
        p++; 
    }
    printf("�ַ�w�ܹ�������%d�Ρ�\n", count);

    return 0;
}