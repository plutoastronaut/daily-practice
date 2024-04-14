#include<stdio.h>
#include<math.h>

int main()
{
    int num1;
    printf("请输入一个五位以内的正整数：\n");
    scanf_s("%d", &num1);

    if (num1 >= 0 && num1 <= 99999)
    {

        int i = (num1 == 0) ? 1 : (int)log10(num1) + 1;
        printf("您输入的数为%d位数\n", i);

        int digits[5];
        printf("这个数逆序数为:");
        for (int j = 0; j < i; j++)
        {
            digits[j] = num1 % 10;
            num1 /= 10;
            printf("%d", digits[j]);
        }
        printf("\n这个数依次为：");
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%2d", digits[j]);
        }
        printf("\n");
    }
    else
    {
        printf("输入错误：\n");
    }
    return 0;
}