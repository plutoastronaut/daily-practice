#include<stdio.h>
#include<string.h>

char* put(char* account);

int main()
{
	char account[50];
	printf("����������ע�������ѧԺ�˺ţ�\n");

	scanf_s("%s", account, sizeof(account));                              
    if (put(account) != NULL)
    {
        printf("ע��ɹ�\n");
    }
    else
    {
        printf("ע��ʧ��\n");
    }
    return 0;
}

char* put(char* account)
{
    if (strlen(account) <= 12 && strlen(account) >= 4)
    {
        return account;
    }
    else
    {
        return NULL;
    }
}