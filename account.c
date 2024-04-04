#include<stdio.h>
#include<string.h>

char* put(char* account);

int main()
{
	char account[50];
	printf("请输入您想注册的明日学院账号：\n");

	scanf_s("%s", account, sizeof(account));                              
    if (put(account) != NULL)
    {
        printf("注册成功\n");
    }
    else
    {
        printf("注册失败\n");
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