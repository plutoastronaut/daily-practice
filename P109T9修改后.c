#include<stdio.h>
#include<math.h>

int main()
{
    int num1;
    printf("������һ����λ���ڵ���������\n");
    scanf_s("%d", &num1);

    if (num1 >= 0 && num1 <= 99999)
    {

        int i = (num1 == 0) ? 1 : (int)log10(num1) + 1;
        printf("���������Ϊ%dλ��\n", i);

        int digits[5];
        printf("�����������Ϊ:");
        for (int j = 0; j < i; j++)
        {
            digits[j] = num1 % 10;
            num1 /= 10;
            printf("%d", digits[j]);
        }
        printf("\n���������Ϊ��");
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%2d", digits[j]);
        }
        printf("\n");
    }
    else
    {
        printf("�������\n");
    }
    return 0;
}