#include<stdio.h>
#include<string.h>

int main()
{
    char a, b;
    printf("������һ����ĸ");
    scanf_s("%c", &a);

    if (a >= 'a' && a <= 'z')
    {
        b = a - 'a' + 'A';
        printf("%c", b); 
    }
    return 0;
}