#include <stdio.h>
#include <ctype.h>

void seatnumber(char myseat);

int main()
{
    char myseat;
    char choice;
    do
    {
        printf("������������λ��:\n");
        scanf_s(" %c", &myseat, 1);
        seatnumber(myseat);

        printf("����Ҫ����������a������������A\n");
        scanf_s(" %c", &choice, 1); 
    } while (choice == 'a' || choice == 'A');
    return 0;
}

void seatnumber(char myseat)
{
    if (isdigit(myseat))
    {
        printf("----------------------\n ����λ�ú�Ϊ%c\n ���ĸ�ʽ��ȷ������...\t\t|\n----------------------\n", myseat);
    }
    else
    {
        printf("----------------------\n|\t�Բ������������λ�Ÿ�ʽ����\t|\n|\t\t�޷��ҵ�����λ��\t\t|\n----------------------\n");
    }
}