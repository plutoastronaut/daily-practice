#include <stdio.h>
#include <ctype.h>

void seatnumber(char myseat);

int main()
{
    char myseat;
    char choice;
    do
    {
        printf("请输入您的座位号:\n");
        scanf_s(" %c", &myseat, 1);
        seatnumber(myseat);

        printf("如想要继续请输入a，结束则输入A\n");
        scanf_s(" %c", &choice, 1); 
    } while (choice == 'a' || choice == 'A');
    return 0;
}

void seatnumber(char myseat)
{
    if (isdigit(myseat))
    {
        printf("----------------------\n 您的位置号为%c\n 您的格式正确，请坐...\t\t|\n----------------------\n", myseat);
    }
    else
    {
        printf("----------------------\n|\t对不起您输入的座位号格式错误\t|\n|\t\t无法找到您的位置\t\t|\n----------------------\n");
    }
}