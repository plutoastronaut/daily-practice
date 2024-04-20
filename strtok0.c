#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int msg_deal(char* msg_src, char* msg_done[], char* str)
{
	char* context = NULL;
	int i = 0;
	msg_done[i] = strtok_s(msg_src, str, &context);
	while (msg_done[i] != NULL)
	{
		i++;
		msg_done[i] = strtok_s(NULL, str, &context);
	}
	return i;
}

int main()
{
	char src[] = "+CMGR:REC UNREAD,+8613466630259,98/10/01,18:22:11+00,ABCdefGHI";
	char* p = ",";
	char* q[6];
	char* temp;
	msg_deal(src, q, p);
	q[1] += 3;
	printf("%s\n", q[0]);
	printf("手机号:%s\n", q[1]);
	printf("日期:%s\n", q[2]);
	temp = strchr(q[3], '+');
	if (temp != NULL) *temp = '\0';
	printf("时间:%s\n", q[3]);
	printf("内容:%s\n", q[4]);
	return 0;
}
