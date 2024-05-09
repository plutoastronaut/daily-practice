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
        printf("字符w出现的位置为第%d个字符\n", position);
        count++; 
        p++; 
    }
    printf("字符w总共出现了%d次。\n", count);

    return 0;
}