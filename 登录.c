#include <stdio.h>
#include <string.h>
int login(const char* account, const char* password);

int main() {
    char account[50];
    char password[50];

    printf("�������˺ţ�");
    scanf_s("%s", account, sizeof(account));
    printf("���������룺");
    scanf_s("%s", password, sizeof(password));

    if (login(account, password)) 
    {
        printf("��¼�ɹ�\n");
    }
    else 
    {
        printf("��¼ʧ��\n");
    }
    return 0;
}
int login(const char* account, const char* password) {
    if (strcmp(account, "����") == 0 && strcmp(password, "123") == 0) {
        return 1;
    }
    else {
        return 0; 
    }
}
